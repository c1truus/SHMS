#ifndef REGISTRATIONWINDOW_H
#define REGISTRATIONWINDOW_H

#include <QDialog>
#include <QDate>

namespace Ui {
class registrationwindow;
}

class registrationwindow : public QDialog
{
    Q_OBJECT

public:
    explicit registrationwindow(QWidget *parent = nullptr);
    ~registrationwindow();

signals:
    void registrationSuccessful(); // 添加注册成功的信号声明

private slots:
    void on_registerButton_clicked();
    void on_backToLoginButton_clicked();

private:
    Ui::registrationwindow *ui;
};

#endif // REGISTRATIONWINDOW_H
