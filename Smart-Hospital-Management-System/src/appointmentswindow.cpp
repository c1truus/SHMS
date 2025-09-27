#include "appointmentswindow.h"
#include "ui_appointmentswindow.h"
#include "dbmanager.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>


appointmentswindow::appointmentswindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::appointmentswindow),
    appointmentsModel(new QStandardItemModel(this))
{
    ui->setupUi(this);

    // Set up the appointments table view
    appointmentsModel->setHorizontalHeaderLabels(QStringList() << "Date" << "Time" << "Doctor" << "Status");
    ui->appointmentTableView->setModel(appointmentsModel);


    // 连接数据库
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/ivy/hospital.db");

    if (!db.open()) {
        qDebug() << "Error: connection with database failed";
    } else {
        qDebug() << "Database: connection ok";
    }


    // 从数据库中获取医生列表并填充 doctorComboBox
    QSqlQuery query;
    query.prepare("SELECT full_name FROM doctors");

    if (query.exec()) {
        while (query.next()) {
            QString doctorName = query.value(0).toString();
            ui->doctorComboBox->addItem(doctorName);
        }
    } else {
        QMessageBox::warning(this, "Error", "Failed to retrieve doctors from the database: " + query.lastError().text());
    }


    // Connect signals to slots
    connect(ui->confirmButton, &QPushButton::clicked, this, &appointmentswindow::on_confirmButton_clicked,Qt::UniqueConnection);
    connect(ui->cancelButton, &QPushButton::clicked, this, &appointmentswindow::on_cancelButton_clicked, Qt::UniqueConnection);
    connect(ui->refreshButton, &QPushButton::clicked, this, &appointmentswindow::on_refreshButton_clicked, Qt::UniqueConnection);

    // Populate the appointment list initially
    refreshAppointmentList();
}

appointmentswindow::~appointmentswindow()
{
    delete ui;
}

void appointmentswindow::on_confirmButton_clicked()
{
    QString selectedDoctor = ui->doctorComboBox->currentText();
    QString selectedDate = ui->dateEdit->text();
    QString selectedTime = ui->timeEdit->text();

    // 获取医生的 doctor_id
    int doctorId = -1;  // 初始化 doctorId

    // 获取医生的 doctor_id
    QSqlQuery doctorQuery;
    doctorQuery.prepare("SELECT doctor_id FROM doctors WHERE full_name = :full_name");
    doctorQuery.bindValue(":full_name", selectedDoctor);

    if (doctorQuery.exec() && doctorQuery.next()) {
        int doctorId = doctorQuery.value(0).toInt();

        if (doctorId == -1) {
            QMessageBox::warning(this, "Error", "Doctor not found.");
            return;  // 如果找不到医生，终止执行
        }

        QSqlQuery query;
        query.prepare("INSERT INTO appointments (appointment_date, appointment_time, doctor_id, status) "
                      "VALUES (:appointment_date, :appointment_time, :doctor_id, 'Confirmed')");
        query.bindValue(":appointment_date", selectedDate);
        query.bindValue(":appointment_time", selectedTime);
        query.bindValue(":doctor_id", doctorId);

        if (query.exec()) {
            QMessageBox::information(this, "Success", "Appointment confirmed successfully.");
            refreshAppointmentList();
        } else {
            QMessageBox::warning(this, "Error", "Failed to confirm appointment: " + query.lastError().text());
        }
    } else {
        QMessageBox::warning(this, "Error", "Doctor not found.");
    }

    // 检查是否已有相同日期和时间的预约
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT COUNT(*) FROM appointments WHERE appointment_date = :appointment_date AND appointment_time = :appointment_time AND doctor_id = :doctor_id");
    checkQuery.bindValue(":appointment_date", selectedDate);
    checkQuery.bindValue(":appointment_time", selectedTime);
    checkQuery.bindValue(":doctor_id", doctorId);

    if (checkQuery.exec() && checkQuery.next()) {
        if (checkQuery.value(0).toInt() > 0) {
            QMessageBox::warning(this, "Error", "This appointment already exists.");
            return; // 终止执行，避免重复预约
        }
    }
}

void appointmentswindow::on_cancelButton_clicked()
{
    QModelIndex currentIndex = ui->appointmentTableView->currentIndex();
    if (!currentIndex.isValid()) {
        QMessageBox::warning(this, "Error", "Please select an appointment to cancel.");
        return;
    }

    QString date = appointmentsModel->data(appointmentsModel->index(currentIndex.row(), 0)).toString();
    QString time = appointmentsModel->data(appointmentsModel->index(currentIndex.row(), 1)).toString();
    QString doctor = appointmentsModel->data(appointmentsModel->index(currentIndex.row(), 2)).toString();

    // 获取医生的 doctor_id
    QSqlQuery doctorQuery;
    doctorQuery.prepare("SELECT doctor_id FROM doctors WHERE full_name = :full_name");
    doctorQuery.bindValue(":full_name", doctor);

    if (doctorQuery.exec() && doctorQuery.next()) {
        int doctorId = doctorQuery.value(0).toInt();

        QSqlQuery query;
        query.prepare("DELETE FROM appointments WHERE appointment_date = :date AND appointment_time = :time AND doctor_id = :doctor_id");
        query.bindValue(":date", date);
        query.bindValue(":time", time);
        query.bindValue(":doctor_id", doctorId); // 使用 doctor_id 而不是 doctor

        if (query.exec()) {
            QMessageBox::information(this, "Success", "Appointment cancelled successfully.");
            refreshAppointmentList();
        } else {
            QMessageBox::warning(this, "Error", "Failed to cancel appointment: " + query.lastError().text());
        }
    } else {
        QMessageBox::warning(this, "Error", "Doctor not found for the selected appointment.");
    }
}

void appointmentswindow::on_refreshButton_clicked()
{
    refreshAppointmentList();
}

void appointmentswindow::refreshAppointmentList()
{
    appointmentsModel->removeRows(0, appointmentsModel->rowCount());

    // 联表查询，从 appointments 中获取预约信息，同时从 doctors 表中获取医生的 full_name
    QSqlQuery query("SELECT appointment_date, appointment_time, doctors.full_name, status "
                    "FROM appointments "
                    "JOIN doctors ON appointments.doctor_id = doctors.doctor_id");

    while (query.next()) {
        QList<QStandardItem *> items;
        items.append(new QStandardItem(query.value(0).toString()));
        items.append(new QStandardItem(query.value(1).toString()));
        items.append(new QStandardItem(query.value(2).toString())); // 医生的 full_name
        items.append(new QStandardItem(query.value(3).toString()));

        appointmentsModel->appendRow(items);
    }
}

void appointmentswindow::on_returnButton_clicked()
{
    // 关闭当前窗口并返回到主界面
    this->close();
    parentWidget()->show(); // 显示主界面
}


