#include "doctorwindow.h"
#include "ui_doctorwindow.h"

doctorwindow::doctorwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::doctorwindow)

{
    ui->setupUi(this);
    initializeTableViews();

    // 连接按钮和槽函数
    connect(ui->viewAppointmentsButton, &QPushButton::clicked, this, &doctorwindow::on_viewappointments_button_clicked);
    connect(ui->viewMedicalRecordsButton, &QPushButton::clicked, this, &doctorwindow::on_viewmedicalrecords_button_clicked);
    connect(ui->generateReportButton, &QPushButton::clicked, this, &doctorwindow::on_generatereport_button_clicked);
    connect(ui->editInfoButton, &QPushButton::clicked, this, &doctorwindow::on_editInfoButton_clicked); // 编辑个人信息按钮连接
    connect(ui->submitDiagnosisButton, &QPushButton::clicked, this, &doctorwindow::on_submitDiagnosisButton_clicked); // 输入诊断按钮连接
    connect(ui->returnButton, &QPushButton::clicked, this, &doctorwindow::on_returnButton_clicked); // 返回按钮连接
    connect(ui->photouploadButton, &QPushButton::clicked, this, &doctorwindow::on_photouploadButton_clicked);
    connect(ui->communicationButton, &QPushButton::clicked, this, &doctorwindow::on_communicationButton_clicked);
    connect(ui->healthassessmentButton, &QPushButton::clicked, this, &doctorwindow::on_healthassessmentButton_clicked);
}

doctorwindow::~doctorwindow()
{
    delete ui;
}

void doctorwindow::initializeTableViews()
{
    // 初始化患者预约 TableView
    appointmentsModel = new QStandardItemModel(this);
    appointmentsModel->setColumnCount(3);
    appointmentsModel->setHeaderData(0, Qt::Horizontal, "患者姓名");
    appointmentsModel->setHeaderData(1, Qt::Horizontal, "预约时间");
    appointmentsModel->setHeaderData(2, Qt::Horizontal, "病历状态");
    ui->appointmentTableView->setModel(appointmentsModel);

    // 初始化查看病例 TableView
    recordsModel = new QStandardItemModel(this);
    recordsModel->setColumnCount(3);
    recordsModel->setHeaderData(0, Qt::Horizontal, "病历编号");
    recordsModel->setHeaderData(1, Qt::Horizontal, "日期");
    recordsModel->setHeaderData(2, Qt::Horizontal, "详情");
    ui->medicalrecordtableView->setModel(recordsModel);

    // 初始化数据图表 TableView
    reportModel = new QStandardItemModel(this);
    reportModel->setColumnCount(2);
    reportModel->setHeaderData(0, Qt::Horizontal, "指标");
    reportModel->setHeaderData(1, Qt::Horizontal, "值");
    ui->generatereporttableView->setModel(reportModel);
}

void doctorwindow::on_viewappointments_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(0); // 切换到患者预约页面
    appointmentsModel->removeRows(0, appointmentsModel->rowCount());

    QStringList patients = {"患者A", "患者B", "患者C"};
    QStringList appointmentTimes = {"2024-08-01 10:00", "2024-08-02 11:00", "2024-08-03 09:00"};
    QStringList medicalStatuses = {"正常", "需复诊", "已完成"};

    for (int i = 0; i < patients.size(); ++i) {
        appointmentsModel->insertRow(i);
        appointmentsModel->setData(appointmentsModel->index(i, 0), patients[i]);
        appointmentsModel->setData(appointmentsModel->index(i, 1), appointmentTimes[i]);
        appointmentsModel->setData(appointmentsModel->index(i, 2), medicalStatuses[i]);
    }
}

void doctorwindow::on_viewmedicalrecords_button_clicked()
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

void doctorwindow::on_generatereport_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(2); // 切换到数据图表页面
    reportModel->removeRows(0, reportModel->rowCount());

    QStringList metrics = {"血压", "心率", "体温"};
    QStringList values = {"120/80", "75 bpm", "36.5 °C"};

    for (int i = 0; i < metrics.size(); ++i) {
        reportModel->insertRow(i);
        reportModel->setData(reportModel->index(i, 0), metrics[i]);
        reportModel->setData(reportModel->index(i, 1), values[i]);
    }
}

void doctorwindow::on_editInfoButton_clicked()
{
    // 创建并显示 editinfowindow 界面
    editInfoWin = new EditInfoWindow(this);
    editInfoWin->show();
}

void doctorwindow::on_submitDiagnosisButton_clicked()
{
    // 创建并显示 diagnosiswindow 界面
    diagnosisWin = new DiagnosisWindow(this);
    diagnosisWin->show();
}

void doctorwindow::on_photouploadButton_clicked()
{
    photouploadWindow= new PhotoUploadWindow(this);
    photouploadWindow->show();
}

void doctorwindow::on_communicationButton_clicked()
{
    communicationWindow= new communicationwindow(this);
    communicationWindow->show();
}

void doctorwindow::on_healthassessmentButton_clicked()
{
    healthassessmentWindow= new healthassessmentwindow(this);
    healthassessmentWindow->show();
}


void doctorwindow::on_returnButton_clicked()
{
    // 关闭当前窗口并返回到主界面
    this->close();
    parentWidget()->show(); // 显示主界面
}


