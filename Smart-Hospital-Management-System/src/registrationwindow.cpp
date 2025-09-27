#include "registrationwindow.h"
#include "ui_registrationwindow.h"
#include "loginwindow.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QPointer>

registrationwindow::registrationwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrationwindow)
{
    ui->setupUi(this);

    // 配置数据库连接
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/ivy/hospital.db");

    if (!db.open()) {
        QMessageBox::critical(this, "Database Connection Error", db.lastError().text());
        return;
    }

    connect(ui->registerButton, &QPushButton::clicked, this, &registrationwindow::on_registerButton_clicked);
    connect(ui->backToLoginButton, &QPushButton::clicked, this, &registrationwindow::on_backToLoginButton_clicked);
}

registrationwindow::~registrationwindow()
{
    delete ui;
}

void registrationwindow::on_registerButton_clicked()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();
    QString fullName = ui->fullNameLineEdit->text();
    QString contactInfo = ui->contactLineEdit->text();
    QDate dob = ui->dobdateEdit->date();

    // 检查用户名是否已存在
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT COUNT(*) FROM users WHERE username = :username");
    checkQuery.bindValue(":username", username);

    if (checkQuery.exec() && checkQuery.next()) {
        int count = checkQuery.value(0).toInt();
        if (count > 0) {
            QMessageBox::warning(this, "注册失败", "用户名已存在！");
            return;  // 用户名已存在，返回
        }
    } else {
        QMessageBox::warning(this, "注册失败", "查询用户名时出现错误：" + checkQuery.lastError().text());
        return;  // 查询错误，返回
    }

    // 插入新用户
    QSqlQuery query;
    query.prepare("INSERT INTO users (username, password, fullName, contactInfo, dob) "
                  "VALUES (:username, :password, :fullName, :contactInfo, :dob)");
    query.bindValue(":username", username);
    query.bindValue(":password", password);
    query.bindValue(":fullName", fullName);
    query.bindValue(":contactInfo", contactInfo);
    query.bindValue(":dob", dob);

    if (query.exec()) {
        QMessageBox::information(this, "注册成功", "用户注册成功！");

        // 注册成功后关闭当前窗口并返回登录窗口
        this->close();  // 关闭注册窗口
    } else {
        QMessageBox::warning(this, "注册失败", "注册时出现错误：" + query.lastError().text());
    }
}

void registrationwindow::on_backToLoginButton_clicked()
{
    this->close(); // 关闭当前窗口
}
