#include "patientwindow.h"
#include "ui_patientwindow.h"
#include "communicationwindow.h"
#include "editinfowindow.h"
#include "appointmentswindow.h"
#include "dbmanager.h"

#include <QPixmap>
#include <QLabel>
#include <QMessageBox>
#include <QDialog>
#include <QStandardItemModel>


patientwindow::patientwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::patientwindow)
{
    ui->setupUi(this);
    initializeTableViews();

    connect(ui->editInfoButton, &QPushButton::clicked, this, &patientwindow::on_editInfoButton_clicked, Qt::UniqueConnection);
    connect(ui->makeAppointmentButton, &QPushButton::clicked, this, &patientwindow::on_makeAppointmentButton_clicked, Qt::UniqueConnection);
    connect(ui->viewDoctorsButton, &QPushButton::clicked, this, &patientwindow::on_viewDoctorsButton_clicked, Qt::UniqueConnection);
    connect(ui->viewMedicalRecordsButton, &QPushButton::clicked, this, &patientwindow::on_viewMedicalRecordsButton_clicked, Qt::UniqueConnection);
    connect(ui->checkdiagnosisButton, &QPushButton::clicked, this, &patientwindow::on_checkdiagnosisButton_clicked, Qt::UniqueConnection);
    connect(ui->communicationButton, &QPushButton::clicked, this, &patientwindow::on_communicationButton_clicked, Qt::UniqueConnection);
    connect(ui->phototableView, &QTableView::clicked, this, &patientwindow::on_phototableView_clicked, Qt::UniqueConnection);
    connect(ui->returnButton, &QPushButton::clicked, this, &patientwindow::on_returnButton_clicked, Qt::UniqueConnection); // 返回按钮连接
}

patientwindow::~patientwindow()
{
    delete ui;
}

void patientwindow::initializeTableViews()
{
// 初始化医生信息 TableView
doctorsModel = new QStandardItemModel(this);
doctorsModel->setColumnCount(3);
doctorsModel->setHeaderData(0, Qt::Horizontal, "医生姓名");
doctorsModel->setHeaderData(1, Qt::Horizontal, "科室");
doctorsModel->setHeaderData(2, Qt::Horizontal, "可预约时间");
ui->doctortableView->setModel(doctorsModel);

// 初始化查看病例 TableView
recordsModel = new QStandardItemModel(this);
recordsModel->setColumnCount(3);
recordsModel->setHeaderData(0, Qt::Horizontal, "病例编号");
recordsModel->setHeaderData(1, Qt::Horizontal, "日期");
recordsModel->setHeaderData(2, Qt::Horizontal, "详情");
ui->medicalreportTableView->setModel(recordsModel);

// 初始化查看诊断 TableView
diagnosisModel = new QStandardItemModel(this);
diagnosisModel->setColumnCount(3);
diagnosisModel->setHeaderData(0, Qt::Horizontal, "诊断编号");
diagnosisModel->setHeaderData(1, Qt::Horizontal, "日期");
diagnosisModel->setHeaderData(2, Qt::Horizontal, "诊断详情");
ui->checkdiagnosistableView->setModel(diagnosisModel);

// 初始化患者照片 TableView
photoModel = new QStandardItemModel(this);
photoModel->setColumnCount(2);
photoModel->setHeaderData(0, Qt::Horizontal, "照片缩略图");
photoModel->setHeaderData(1, Qt::Horizontal, "照片说明");
ui->phototableView->setModel(photoModel);
}

void patientwindow::on_editInfoButton_clicked()
{
    EditInfoWindow *editInfoWindow = new EditInfoWindow(this); // 打开个人信息编辑界面
    editInfoWindow->exec();
}

void patientwindow::on_viewDoctorsButton_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
     doctorsModel->removeRows(0, doctorsModel->rowCount());
     QStringList doctorsname = {"A", "B", "C"};
     QStringList department = {"牙科", "骨科", "皮肤科"};
     QStringList timeavailable = {"星期一 10.00", "星期五 15.00", "星期三 12.00"};

     for (int i = 0; i < doctorsname.size(); ++i) {
         doctorsModel->insertRow(i);
         doctorsModel->setData(doctorsModel->index(i, 0), doctorsname[i]);
         doctorsModel->setData(doctorsModel->index(i, 1), department[i]);
         doctorsModel->setData(doctorsModel->index(i, 2), timeavailable[i]);
     }
}



void patientwindow::on_makeAppointmentButton_clicked()
{
    appointmentswindow *appointmentWindow = new appointmentswindow(this); // 打开预约界面
    appointmentWindow->exec();
}


void patientwindow::on_viewMedicalRecordsButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1); // 切换到查看病例页面
    recordsModel->removeRows(0, recordsModel->rowCount());

    QStringList medicalRecords = {"病历A", "病历B", "病历C"};
    QStringList dates = {"2024-07-01", "2024-07-02", "2024-07-03"};
    QStringList details = {"健康", "需要注意", "已痊愈"};

    for (int i = 0; i < medicalRecords.size(); ++i) {
        recordsModel->insertRow(i);
        recordsModel->setData(recordsModel->index(i, 0), medicalRecords[i]);
        recordsModel->setData(recordsModel->index(i, 1), dates[i]);
        recordsModel->setData(recordsModel->index(i, 2), details[i]);
    }
}


void patientwindow::on_communicationButton_clicked()
{
    communicationwindow *communicationWindow = new communicationwindow(this);
    communicationWindow->show();
    this->close();
}

void patientwindow::on_checkdiagnosisButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    diagnosisModel->removeRows(0, diagnosisModel->rowCount());

    QStringList diagnosis = {"发烧", "咳嗽", "感冒"};
    QStringList dates = {"2024-07-01", "2024-07-02", "2024-07-03"};
    QStringList details = {"已发烧两天，需住院", "开咳嗽药", "开感冒药"};

    for (int i = 0; i < diagnosis.size(); ++i) {
        diagnosisModel->insertRow(i);
    diagnosisModel->setData(diagnosisModel->index(i, 0), diagnosis[i]);
    recordsModel->setData(diagnosisModel->index(i, 1), dates[i]);
    recordsModel->setData(diagnosisModel->index(i, 2), details[i]);
}
}

void patientwindow::on_phototableView_clicked(const QModelIndex &index)
{
    QString photoPath = photoModel->data(index).toString();

}

void patientwindow::on_returnButton_clicked()
{
    // 关闭当前窗口并返回到主界面
    this->close();
    parentWidget()->show(); // 显示主界面
}
