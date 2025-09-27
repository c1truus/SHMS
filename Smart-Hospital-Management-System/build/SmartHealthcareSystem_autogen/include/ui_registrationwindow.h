/********************************************************************************
** Form generated from reading UI file 'registrationwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATIONWINDOW_H
#define UI_REGISTRATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_registrationwindow
{
public:
    QLabel *label;
    QLineEdit *usernameLineEdit;
    QLineEdit *passwordLineEdit;
    QLineEdit *fullNameLineEdit;
    QLineEdit *contactLineEdit;
    QDateEdit *dobdateEdit;
    QPushButton *registerButton;
    QPushButton *backToLoginButton;
    QPushButton *facerecognationButton;
    QPushButton *convertlanguageButton;

    void setupUi(QDialog *registrationwindow)
    {
        if (registrationwindow->objectName().isEmpty())
            registrationwindow->setObjectName(QString::fromUtf8("registrationwindow"));
        registrationwindow->resize(600, 516);
        label = new QLabel(registrationwindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 40, 121, 18));
        usernameLineEdit = new QLineEdit(registrationwindow);
        usernameLineEdit->setObjectName(QString::fromUtf8("usernameLineEdit"));
        usernameLineEdit->setGeometry(QRect(160, 120, 113, 26));
        passwordLineEdit = new QLineEdit(registrationwindow);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setGeometry(QRect(320, 120, 113, 26));
        passwordLineEdit->setEchoMode(QLineEdit::Password);
        fullNameLineEdit = new QLineEdit(registrationwindow);
        fullNameLineEdit->setObjectName(QString::fromUtf8("fullNameLineEdit"));
        fullNameLineEdit->setGeometry(QRect(160, 180, 113, 26));
        contactLineEdit = new QLineEdit(registrationwindow);
        contactLineEdit->setObjectName(QString::fromUtf8("contactLineEdit"));
        contactLineEdit->setGeometry(QRect(320, 180, 113, 26));
        dobdateEdit = new QDateEdit(registrationwindow);
        dobdateEdit->setObjectName(QString::fromUtf8("dobdateEdit"));
        dobdateEdit->setGeometry(QRect(240, 240, 110, 27));
        registerButton = new QPushButton(registrationwindow);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));
        registerButton->setGeometry(QRect(180, 290, 88, 26));
        backToLoginButton = new QPushButton(registrationwindow);
        backToLoginButton->setObjectName(QString::fromUtf8("backToLoginButton"));
        backToLoginButton->setGeometry(QRect(340, 290, 88, 26));
        facerecognationButton = new QPushButton(registrationwindow);
        facerecognationButton->setObjectName(QString::fromUtf8("facerecognationButton"));
        facerecognationButton->setGeometry(QRect(180, 370, 111, 26));
        convertlanguageButton = new QPushButton(registrationwindow);
        convertlanguageButton->setObjectName(QString::fromUtf8("convertlanguageButton"));
        convertlanguageButton->setGeometry(QRect(350, 370, 88, 26));

        retranslateUi(registrationwindow);

        QMetaObject::connectSlotsByName(registrationwindow);
    } // setupUi

    void retranslateUi(QDialog *registrationwindow)
    {
        registrationwindow->setWindowTitle(QCoreApplication::translate("registrationwindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("registrationwindow", "\346\263\250\345\206\214\346\226\260\347\224\250\346\210\267", nullptr));
        usernameLineEdit->setText(QString());
        usernameLineEdit->setPlaceholderText(QCoreApplication::translate("registrationwindow", "\347\224\250\346\210\267\345\220\215", nullptr));
        passwordLineEdit->setPlaceholderText(QCoreApplication::translate("registrationwindow", "\345\257\206\347\240\201", nullptr));
        fullNameLineEdit->setPlaceholderText(QCoreApplication::translate("registrationwindow", "\345\205\250\345\220\215", nullptr));
        contactLineEdit->setPlaceholderText(QCoreApplication::translate("registrationwindow", "\350\201\224\347\263\273\344\277\241\346\201\257", nullptr));
        dobdateEdit->setDisplayFormat(QCoreApplication::translate("registrationwindow", "yyyy-MM-dd", nullptr));
        registerButton->setText(QCoreApplication::translate("registrationwindow", "\346\263\250\345\206\214", nullptr));
        backToLoginButton->setText(QCoreApplication::translate("registrationwindow", "\350\277\224\345\233\236\347\231\273\345\275\225", nullptr));
        facerecognationButton->setText(QCoreApplication::translate("registrationwindow", "\351\235\242\351\203\250\350\257\206\345\210\253\347\231\273\345\205\245", nullptr));
        convertlanguageButton->setText(QCoreApplication::translate("registrationwindow", "\350\257\255\350\250\200\345\210\207\346\215\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registrationwindow: public Ui_registrationwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONWINDOW_H
