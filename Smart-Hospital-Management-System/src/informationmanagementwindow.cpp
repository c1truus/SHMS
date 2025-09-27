#include "informationmanagementwindow.h"
#include "ui_informationmanagementwindow.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlTableModel>
#include <QMessageBox>

informationmanagementwindow::informationmanagementwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::informationmanagementwindow)
{
    ui->setupUi(this);
    setupDatabaseConnection();

    // Initialize models
    modelDoctor = new QSqlTableModel(this);
    modelPatient = new QSqlTableModel(this);
    modelMedicalRecord = new QSqlTableModel(this);
    modelAppointment = new QSqlTableModel(this);
    modelDiagnosis = new QSqlTableModel(this);

    // Load initial data (e.g., Doctor information by default)
    loadTableData(modelDoctor, "doctors", ui->doctorinfotableView);
}

informationmanagementwindow::~informationmanagementwindow()
{
    delete ui;
}

void informationmanagementwindow::setupDatabaseConnection()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/ivy/hospital.db");

    if (!db.open()) {
        QMessageBox::critical(this, "Database Connection Error", db.lastError().text());
    }
}

void informationmanagementwindow::loadTableData(QSqlTableModel *model, const QString &tableName, QTableView *tableView)
{
    model->setTable(tableName);
    model->select();
    tableView->setModel(model);
}

void informationmanagementwindow::on_viewDoctorInfoButton_clicked()
{
    loadTableData(modelDoctor, "doctors", ui->doctorinfotableView);
    ui->stackedWidget->setCurrentIndex(0); // Switch to doctor info page
}

void informationmanagementwindow::on_viewPatientInfoButton_clicked()
{
    loadTableData(modelPatient, "patients", ui->patientinfotableView);
    ui->stackedWidget->setCurrentIndex(1); // Switch to patient info page
}

void informationmanagementwindow::on_viewMedicalRecordsButton_clicked()
{
    loadTableData(modelMedicalRecord, "medical_records", ui->medicalrecordtableView);
    ui->stackedWidget->setCurrentIndex(2); // Switch to medical record page
}

void informationmanagementwindow::on_viewAppointmentInfoButton_clicked()
{
    loadTableData(modelAppointment, "appointments", ui->appointmenttableView);
    ui->stackedWidget->setCurrentIndex(3); // Switch to appointment page
}

void informationmanagementwindow::on_viewPrescriptionInfoButton_clicked()
{
    loadTableData(modelDiagnosis, "Diagnosis", ui->diagnosistableView);
    ui->stackedWidget->setCurrentIndex(4); // Switch to diagnosis page
}

void informationmanagementwindow::on_refreshDataButton_clicked()
{
    // Refresh data based on the current view
    int currentIndex = ui->stackedWidget->currentIndex();

    switch (currentIndex) {
    case 0:
        modelDoctor->select();
        break;
    case 1:
        modelPatient->select();
        break;
    case 2:
        modelMedicalRecord->select();
        break;
    case 3:
        modelAppointment->select();
        break;
    case 4:
        modelDiagnosis->select();
        break;
    }
}

void informationmanagementwindow::on_returnButton_clicked()
{
    // 关闭当前窗口并返回到主界面
    this->close();
    parentWidget()->show(); // 显示主界面
}

