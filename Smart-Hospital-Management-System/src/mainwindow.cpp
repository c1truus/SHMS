#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "loginwindow.h"
#include <QMessageBox>
#include "patientwindow.h"
#include "doctorwindow.h"
#include "informationmanagementwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    // 确保连接信号和槽
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::on_pushButton_clicked);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::on_pushButton_2_clicked);
    connect(ui->pushButton_3, &QPushButton::clicked, this, &MainWindow::on_pushButton_3_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked() {
    // 逻辑已在程序启动时处理，无需再次调用LoginWindow
    LoginWindow loginDialog(this);
    if (loginDialog.exec() == QDialog::Accepted) {
        // 登录成功后，可以打开患者界面或进行相应操作
        QMessageBox::information(this, "患者登录成功", "欢迎患者登录！");
        // 此处可以调用显示患者窗口的代码
        // 打开患者窗口
        patientwindow *patientWindow = new patientwindow(this);
        patientWindow->show();
    } else {
        // 登录失败或用户取消
        QMessageBox::warning(this, "登录取消", "患者登录未成功！");
    }
}

void MainWindow::on_pushButton_2_clicked() {
    // 逻辑已在程序启动时处理，无需再次调用LoginWindow
    LoginWindow loginDialog(this);
    if (loginDialog.exec() == QDialog::Accepted) {
        // 登录成功后，可以打开医生界面或进行相应操作
        QMessageBox::information(this, "医生登录成功", "欢迎医生登录！");
        // 此处可以调用显示医生窗口的代码
        doctorwindow *doctorWindow = new doctorwindow(this);
        doctorWindow->show();
    } else {
        // 登录失败或用户取消
        QMessageBox::warning(this, "登录取消", "医生登录未成功！");
    }
}

void MainWindow::on_pushButton_3_clicked() {
    // 打开信息管理窗口
    informationmanagementwindow *infoManagementWindow = new informationmanagementwindow(this);
    infoManagementWindow->show(); // 显示信息管理窗口
    this->hide(); // 隐藏主窗口
}
