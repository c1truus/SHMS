#include "communicationwindow.h"
#include "ui_communicationwindow.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDateTime>
#include <QDebug>
#include <QDialog>
#include <QSqlDatabase>

communicationwindow::communicationwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::communicationwindow),
    currentUserId(-1),
    targetUserId(-1)
{
    ui->setupUi(this);

    // 确保数据库连接已打开
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/ivy/hospital.db");

    if (!db.open()) {
        QMessageBox::critical(this, "数据库错误", "无法连接到数据库！");
        return;
    }
}

communicationwindow::~communicationwindow()
{
    delete ui;
    db.close();  // 关闭数据库连接
}

void communicationwindow::setCurrentUser(int userId, const QString& userType)
{
    currentUserId = userId;
    currentUserType = userType;
}

void communicationwindow::setTargetUser(int targetUserId, const QString& targetUserType)
{
    this->targetUserId = targetUserId;
    this->targetUserType = targetUserType;
}

void communicationwindow::on_sendMessageButton_clicked()
{
    QString message = ui->messageLineEdit->text();
    if (message.isEmpty()) {
        return;
    }

    // 插入消息到数据库
    QSqlQuery query;
    query.prepare("INSERT INTO communication (patient_id, doctor_id, message, sender) "
                  "VALUES (:patient_id, :doctor_id, :message, :sender)");

    if (currentUserType == "patient") {
        query.bindValue(":patient_id", currentUserId);
        query.bindValue(":doctor_id", targetUserId);
        query.bindValue(":sender", "patient");
    } else if (currentUserType == "doctor") {
        query.bindValue(":patient_id", targetUserId);
        query.bindValue(":doctor_id", currentUserId);
        query.bindValue(":sender", "doctor");
    }

    query.bindValue(":message", message);

    if (!query.exec()) {
        qDebug() << "Failed to insert message: " << query.lastError();
        return;
    }

    // 显示消息在聊天窗口
    ui->chatDisplayTextEdit->append((currentUserType == "patient" ? "患者: " : "医生: ") + message);

    // 清空输入框
    ui->messageLineEdit->clear();
}

void communicationwindow::on_viewChatHistoryButton_clicked()
{
    ui->chatDisplayTextEdit->clear();
    QSqlQuery query;

    query.prepare("SELECT message, sender, timestamp FROM communication "
                  "WHERE (patient_id = :patient_id AND doctor_id = :doctor_id) "
                  "ORDER BY timestamp ASC");

    if (currentUserType == "patient") {
        query.bindValue(":patient_id", currentUserId);
        query.bindValue(":doctor_id", targetUserId);
    } else if (currentUserType == "doctor") {
        query.bindValue(":patient_id", targetUserId);
        query.bindValue(":doctor_id", currentUserId);
    }

    if (query.exec()) {
        while (query.next()) {
            QString sender = query.value("sender").toString();
            QString message = query.value("message").toString();
            QString timestamp = query.value("timestamp").toString();
            QString formattedMessage = QString("[%1] %2: %3")
                                           .arg(timestamp)
                                           .arg(sender == "patient" ? "患者" : "医生")
                                           .arg(message);
            ui->chatDisplayTextEdit->append(formattedMessage);
        }
    } else {
        qDebug() << "Failed to retrieve messages: " << query.lastError();
    }
}

void communicationwindow::on_returnButton_clicked()
{
    // 关闭当前窗口并返回到主界面
    this->close();
    parentWidget()->show(); // 显示主界面
}
