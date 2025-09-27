#ifndef COMMUNICATIONWINDOW_H
#define COMMUNICATIONWINDOW_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDateTime>
#include <QDebug>

namespace Ui {
class communicationwindow;
}

class communicationwindow : public QDialog
{
    Q_OBJECT

public:
    explicit communicationwindow(QWidget *parent = nullptr);
    ~communicationwindow();

    void setCurrentUser(int userId, const QString& userType);
    void setTargetUser(int targetUserId, const QString& targetUserType);

private slots:
    void on_sendMessageButton_clicked();
    void on_viewChatHistoryButton_clicked();
    void on_returnButton_clicked();
private:
    Ui::communicationwindow *ui;
    int currentUserId;
    QString currentUserType;
    int targetUserId;
    QString targetUserType;
    QSqlDatabase db;
};

#endif // COMMUNICATIONWINDOW_H


