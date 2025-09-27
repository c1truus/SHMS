#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QDialog>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include "dbmanager.h"

QT_BEGIN_NAMESPACE
namespace Ui { class LoginWindow; }
QT_END_NAMESPACE

class LoginWindow : public QDialog
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

signals:
    void loginSuccessful(const QString &userType);  // 登录成功信号
    void openPatientWindow();  // 打开患者窗口信号
    void openDoctorWindow();  // 打开医生窗口信号
    void openHealthAssessmentWindow();  // 打开健康评估窗口信号
    void openCommunicationWindow();  // 打开医患沟通窗口信号
    void openInformationManagementWindow();  // 打开信息管理窗口信号

private slots:
    void on_loginButton_clicked();  // 登录按钮点击槽
    void on_registerButton_clicked();  // 注册按钮点击槽

private:
    Ui::LoginWindow *ui;  // UI对象
    QSqlDatabase db;  // 数据库对象
    void setupDatabase();  // 设置数据库连接
};

#endif // LOGINWINDOW_H
