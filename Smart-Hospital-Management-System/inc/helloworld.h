#ifndef HELLOWORLD_H
#define HELLOWORLD_H

#include <QMainWindow>
#include "loginwindow.h"

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

#endif // HELLOWORLD_H
