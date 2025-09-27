/********************************************************************************
** Form generated from reading UI file 'appointmentswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPOINTMENTSWINDOW_H
#define UI_APPOINTMENTSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_appointmentswindow
{
public:
    QLabel *label;
    QDateEdit *dateEdit;
    QComboBox *doctorComboBox;
    QTimeEdit *timeEdit;
    QTableView *appointmentTableView;
    QPushButton *confirmButton;
    QPushButton *cancelButton;
    QPushButton *refreshButton;
    QPushButton *returnButton;

    void setupUi(QDialog *appointmentswindow)
    {
        if (appointmentswindow->objectName().isEmpty())
            appointmentswindow->setObjectName(QString::fromUtf8("appointmentswindow"));
        appointmentswindow->resize(667, 562);
        label = new QLabel(appointmentswindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 40, 111, 18));
        dateEdit = new QDateEdit(appointmentswindow);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(90, 130, 110, 27));
        doctorComboBox = new QComboBox(appointmentswindow);
        doctorComboBox->setObjectName(QString::fromUtf8("doctorComboBox"));
        doctorComboBox->setGeometry(QRect(90, 190, 86, 26));
        timeEdit = new QTimeEdit(appointmentswindow);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(240, 130, 118, 27));
        appointmentTableView = new QTableView(appointmentswindow);
        appointmentTableView->setObjectName(QString::fromUtf8("appointmentTableView"));
        appointmentTableView->setGeometry(QRect(240, 180, 256, 192));
        confirmButton = new QPushButton(appointmentswindow);
        confirmButton->setObjectName(QString::fromUtf8("confirmButton"));
        confirmButton->setGeometry(QRect(90, 420, 88, 26));
        cancelButton = new QPushButton(appointmentswindow);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(270, 420, 88, 26));
        refreshButton = new QPushButton(appointmentswindow);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));
        refreshButton->setGeometry(QRect(450, 420, 88, 26));
        returnButton = new QPushButton(appointmentswindow);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(270, 500, 88, 26));

        retranslateUi(appointmentswindow);

        QMetaObject::connectSlotsByName(appointmentswindow);
    } // setupUi

    void retranslateUi(QDialog *appointmentswindow)
    {
        appointmentswindow->setWindowTitle(QCoreApplication::translate("appointmentswindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("appointmentswindow", "\346\202\243\350\200\205\351\242\204\347\272\246\347\225\214\351\235\242", nullptr));
        confirmButton->setText(QCoreApplication::translate("appointmentswindow", "\347\241\256\350\256\244\351\242\204\347\272\246", nullptr));
        cancelButton->setText(QCoreApplication::translate("appointmentswindow", "\345\217\226\346\266\210\351\242\204\347\272\246", nullptr));
        refreshButton->setText(QCoreApplication::translate("appointmentswindow", "\345\210\267\346\226\260", nullptr));
        returnButton->setText(QCoreApplication::translate("appointmentswindow", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class appointmentswindow: public Ui_appointmentswindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPOINTMENTSWINDOW_H
