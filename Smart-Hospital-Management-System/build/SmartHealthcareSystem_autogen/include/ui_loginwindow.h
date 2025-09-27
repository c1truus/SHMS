/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QLabel *label_3;
    QLineEdit *usernameLineEdit;
    QPushButton *loginButton;
    QLabel *label_4;
    QLineEdit *passwordLineEdit;
    QPushButton *registerButton;
    QLabel *label;
    QGraphicsView *graphicsView;

    void setupUi(QDialog *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QString::fromUtf8("LoginWindow"));
        LoginWindow->resize(596, 365);
        label_3 = new QLabel(LoginWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(200, 150, 66, 18));
        QFont font;
        font.setFamily(QString::fromUtf8("AR PL UKai CN"));
        label_3->setFont(font);
        usernameLineEdit = new QLineEdit(LoginWindow);
        usernameLineEdit->setObjectName(QString::fromUtf8("usernameLineEdit"));
        usernameLineEdit->setGeometry(QRect(270, 70, 113, 26));
        loginButton = new QPushButton(LoginWindow);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(180, 240, 88, 26));
        QFont font1;
        font1.setFamily(QString::fromUtf8("AR PL UKai CN"));
        font1.setBold(true);
        loginButton->setFont(font1);
        label_4 = new QLabel(LoginWindow);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(200, 70, 66, 18));
        label_4->setFont(font);
        passwordLineEdit = new QLineEdit(LoginWindow);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setGeometry(QRect(270, 150, 113, 26));
        passwordLineEdit->setEchoMode(QLineEdit::Password);
        registerButton = new QPushButton(LoginWindow);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));
        registerButton->setGeometry(QRect(310, 240, 88, 26));
        registerButton->setFont(font1);
        label = new QLabel(LoginWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 30, 191, 18));
        label->setFont(font1);
        graphicsView = new QGraphicsView(LoginWindow);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(150, 10, 291, 301));
        graphicsView->raise();
        label_3->raise();
        usernameLineEdit->raise();
        loginButton->raise();
        label_4->raise();
        passwordLineEdit->raise();
        registerButton->raise();
        label->raise();

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QDialog *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("LoginWindow", "\345\257\206\347\240\201", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginWindow", "\347\231\273\345\275\225", nullptr));
        label_4->setText(QCoreApplication::translate("LoginWindow", "\347\224\250\346\210\267\345\220\215", nullptr));
        registerButton->setText(QCoreApplication::translate("LoginWindow", "\346\263\250\345\206\214", nullptr));
        label->setText(QCoreApplication::translate("LoginWindow", "\346\254\242\350\277\216\346\235\245\345\210\260\346\231\272\346\205\247\345\214\273\347\226\227\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
