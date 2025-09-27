#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "registrationwindow.h"
#include "dbmanager.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

LoginWindow::LoginWindow(QWidget *parent)
    : QDialog(parent), ui(new Ui::LoginWindow)
{
    ui->setupUi(this);


    // 确保 DbManager 实例中的数据库连接已经打开
    DbManager& dbManager = DbManager::getInstance();
    if (!dbManager.openDatabase("/home/ivy/hospital.db")) {
        QMessageBox::critical(this, "数据库错误", "无法连接到数据库！");
        return;
    }


    // 连接按钮和相应的槽函数
    connect(ui->loginButton, &QPushButton::clicked, this, &LoginWindow::on_loginButton_clicked, Qt::UniqueConnection);
    connect(ui->registerButton, &QPushButton::clicked, this, &LoginWindow::on_registerButton_clicked, Qt::UniqueConnection);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_loginButton_clicked()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    QSqlQuery query;
    query.prepare("SELECT * FROM users WHERE username = :username AND password = :password");
    query.bindValue(":username", username);
    query.bindValue(":password", password);

    if (query.exec() && query.next()) {
        QString userType = query.value("userType").toString();  // 假设userType字段用于区分用户类型
        emit loginSuccessful(userType); // 发出登录成功信号并传递用户类型
        this->accept(); // 关闭对话框
    } else {
        QMessageBox::warning(this, "登录失败", "用户名或密码错误！");
    }
}

void LoginWindow::on_registerButton_clicked()
{
    registrationwindow *regWindow = new registrationwindow(this);
    connect(regWindow, &registrationwindow::registrationSuccessful, this, [this]() {
        QMessageBox::information(this, "注册成功", "请使用新账户登录！");
        this->accept(); // 关闭对话框
    });
    regWindow->exec(); // 以模态对话框的方式显示注册窗口
}
