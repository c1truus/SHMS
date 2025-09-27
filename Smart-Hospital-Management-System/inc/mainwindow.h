#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "loginwindow.h"
#include "patientwindow.h"  // 引入患者窗口头文件
#include "doctorwindow.h"   // 引入医生窗口头文件
#include "healthassessmentwindow.h"  // 引入健康评估窗口头文件
#include "communicationwindow.h"  // 引入医患沟通窗口头文件
#include "informationmanagementwindow.h"  // 引入信息管理窗口头文件

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();      // 患者登录按钮的槽函数
    void on_pushButton_2_clicked();    // 医生登录按钮的槽函数
    void on_pushButton_3_clicked();    // 信息管理按钮的槽函数

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
