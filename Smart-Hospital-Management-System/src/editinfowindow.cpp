#include "editinfowindow.h"
#include "ui_editinfowindow.h"

EditInfoWindow::EditInfoWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditInfoWindow)
{
    ui->setupUi(this);

    // 设置用户ID，这里假设用户ID是1，你可以从登录窗口传递实际的用户ID
    userId = 1;
}

EditInfoWindow::~EditInfoWindow()
{
    delete ui;
}

void EditInfoWindow::on_confirmeditButton_clicked()
{
    QString username = ui->usernamelineEdit->text();
    QString password = ui->passwordlineEdit->text();
    QString fullname = ui->fullnamelineEdit->text();
    QString contact = ui->contactlineEdit->text();

    // 更新用户信息
    QSqlQuery query;
    query.prepare("UPDATE users SET username = ?, password = ?, fullname = ?, contact = ? WHERE id = ?");
    query.addBindValue(username);
    query.addBindValue(password);
    query.addBindValue(fullname);
    query.addBindValue(contact);
    query.addBindValue(userId);

    if (query.exec()) {
        QMessageBox::information(this, "Success", "Your information has been successfully updated.");
    } else {
        QMessageBox::critical(this, "Error", "Failed to update user information.");
    }

    // 关闭编辑窗口
    this->close();
}


void EditInfoWindow::on_returnButton_clicked()
{
    // 返回之前的窗口或关闭当前窗口
    this->close();
    parentWidget()->show();
}
