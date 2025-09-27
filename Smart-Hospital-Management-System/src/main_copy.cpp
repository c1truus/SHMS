#include "mainwindow.h"
#include "loginwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginWindow loginWindow;

    QObject::connect(&loginWindow, &LoginWindow::loginSuccessful, [&]() {
        MainWindow mainWindow;
        mainWindow.show();
    });

    return a.exec();
}

