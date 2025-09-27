#include <QApplication>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>
#include "mainwindow.h"
#include "loginwindow.h"
#include "patientwindow.h"
#include "doctorwindow.h"
#include "healthassessmentwindow.h"
#include "communicationwindow.h"
#include "informationmanagementwindow.h"
#include "dbmanager.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // 打开数据库连接
    if (!DbManager::getInstance().openDatabase("/home/ivy/hospital.db")) {
        qDebug() << "Failed to open database.";
        return -1; // 退出程序
    }

    MainWindow w;
    w.show();
    return a.exec();



    LoginWindow loginWindow;

    QObject::connect(&loginWindow, &LoginWindow::loginSuccessful, [&]() {
        MainWindow *mainWindow = new MainWindow(); // 创建主窗口
        mainWindow->show(); // 显示主窗口
    });

    QObject::connect(&loginWindow, &LoginWindow::openPatientWindow, [&]() {
        patientwindow *patientWindow = new patientwindow();
        patientWindow->show();
    });

    QObject::connect(&loginWindow, &LoginWindow::openDoctorWindow, [&]() {
        doctorwindow *doctorWindow = new doctorwindow();
        doctorWindow->show();
    });

    QObject::connect(&loginWindow, &LoginWindow::openHealthAssessmentWindow, [&]() {
        healthassessmentwindow *healthAssessmentWindow = new healthassessmentwindow();
        healthAssessmentWindow->show();
    });

    QObject::connect(&loginWindow, &LoginWindow::openCommunicationWindow, [&]() {
        communicationwindow *communicationWindow = new communicationwindow();
        communicationWindow->show();
    });

    QObject::connect(&loginWindow, &LoginWindow::openInformationManagementWindow, [&]() {
        informationmanagementwindow *informationManagementWindow = new informationmanagementwindow();
        informationManagementWindow->show();
    });

    loginWindow.show();
    return a.exec();
}
