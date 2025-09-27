/********************************************************************************
** Form generated from reading UI file 'editinfowindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITINFOWINDOW_H
#define UI_EDITINFOWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_EditInfoWindow
{
public:
    QLabel *label;
    QLineEdit *usernamelineEdit;
    QLineEdit *passwordlineEdit;
    QLineEdit *fullnamelineEdit;
    QLineEdit *contactlineEdit;
    QPushButton *confirmeditButton;
    QPushButton *returnButton;

    void setupUi(QDialog *EditInfoWindow)
    {
        if (EditInfoWindow->objectName().isEmpty())
            EditInfoWindow->setObjectName(QString::fromUtf8("EditInfoWindow"));
        EditInfoWindow->resize(599, 365);
        label = new QLabel(EditInfoWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 50, 151, 18));
        usernamelineEdit = new QLineEdit(EditInfoWindow);
        usernamelineEdit->setObjectName(QString::fromUtf8("usernamelineEdit"));
        usernamelineEdit->setGeometry(QRect(120, 110, 113, 26));
        passwordlineEdit = new QLineEdit(EditInfoWindow);
        passwordlineEdit->setObjectName(QString::fromUtf8("passwordlineEdit"));
        passwordlineEdit->setGeometry(QRect(320, 110, 113, 26));
        fullnamelineEdit = new QLineEdit(EditInfoWindow);
        fullnamelineEdit->setObjectName(QString::fromUtf8("fullnamelineEdit"));
        fullnamelineEdit->setGeometry(QRect(120, 200, 113, 26));
        contactlineEdit = new QLineEdit(EditInfoWindow);
        contactlineEdit->setObjectName(QString::fromUtf8("contactlineEdit"));
        contactlineEdit->setGeometry(QRect(330, 200, 113, 26));
        confirmeditButton = new QPushButton(EditInfoWindow);
        confirmeditButton->setObjectName(QString::fromUtf8("confirmeditButton"));
        confirmeditButton->setGeometry(QRect(140, 270, 88, 26));
        returnButton = new QPushButton(EditInfoWindow);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(350, 270, 88, 26));

        retranslateUi(EditInfoWindow);

        QMetaObject::connectSlotsByName(EditInfoWindow);
    } // setupUi

    void retranslateUi(QDialog *EditInfoWindow)
    {
        EditInfoWindow->setWindowTitle(QCoreApplication::translate("EditInfoWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("EditInfoWindow", "\344\277\241\346\201\257\347\274\226\350\276\221\347\225\214\351\235\242", nullptr));
        usernamelineEdit->setPlaceholderText(QCoreApplication::translate("EditInfoWindow", "\347\224\250\346\210\267\345\220\215", nullptr));
        passwordlineEdit->setPlaceholderText(QCoreApplication::translate("EditInfoWindow", "\345\257\206\347\240\201", nullptr));
        fullnamelineEdit->setPlaceholderText(QCoreApplication::translate("EditInfoWindow", "\345\205\250\345\220\215", nullptr));
        contactlineEdit->setPlaceholderText(QCoreApplication::translate("EditInfoWindow", "\350\201\224\347\263\273\344\277\241\346\201\257", nullptr));
        confirmeditButton->setText(QCoreApplication::translate("EditInfoWindow", "\347\241\256\350\256\244\346\233\264\346\224\271", nullptr));
        returnButton->setText(QCoreApplication::translate("EditInfoWindow", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditInfoWindow: public Ui_EditInfoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITINFOWINDOW_H
