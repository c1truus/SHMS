/********************************************************************************
** Form generated from reading UI file 'patientwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTWINDOW_H
#define UI_PATIENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_patientwindow
{
public:
    QLabel *label;
    QPushButton *editInfoButton;
    QPushButton *viewDoctorsButton;
    QPushButton *makeAppointmentButton;
    QPushButton *viewMedicalRecordsButton;
    QPushButton *checkdiagnosisButton;
    QTableView *phototableView;
    QPushButton *returnButton;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTableView *doctortableView;
    QWidget *page_2;
    QTableView *medicalreportTableView;
    QWidget *page_3;
    QTableView *checkdiagnosistableView;
    QPushButton *communicationButton;

    void setupUi(QDialog *patientwindow)
    {
        if (patientwindow->objectName().isEmpty())
            patientwindow->setObjectName(QString::fromUtf8("patientwindow"));
        patientwindow->resize(603, 634);
        label = new QLabel(patientwindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 30, 91, 18));
        QFont font;
        font.setFamily(QString::fromUtf8("AR PL UKai CN"));
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);
        editInfoButton = new QPushButton(patientwindow);
        editInfoButton->setObjectName(QString::fromUtf8("editInfoButton"));
        editInfoButton->setGeometry(QRect(50, 80, 91, 26));
        QFont font1;
        font1.setFamily(QString::fromUtf8("AR PL UKai CN"));
        editInfoButton->setFont(font1);
        viewDoctorsButton = new QPushButton(patientwindow);
        viewDoctorsButton->setObjectName(QString::fromUtf8("viewDoctorsButton"));
        viewDoctorsButton->setGeometry(QRect(50, 160, 101, 26));
        viewDoctorsButton->setFont(font1);
        makeAppointmentButton = new QPushButton(patientwindow);
        makeAppointmentButton->setObjectName(QString::fromUtf8("makeAppointmentButton"));
        makeAppointmentButton->setGeometry(QRect(180, 80, 88, 26));
        makeAppointmentButton->setFont(font1);
        viewMedicalRecordsButton = new QPushButton(patientwindow);
        viewMedicalRecordsButton->setObjectName(QString::fromUtf8("viewMedicalRecordsButton"));
        viewMedicalRecordsButton->setGeometry(QRect(180, 160, 88, 26));
        viewMedicalRecordsButton->setFont(font1);
        checkdiagnosisButton = new QPushButton(patientwindow);
        checkdiagnosisButton->setObjectName(QString::fromUtf8("checkdiagnosisButton"));
        checkdiagnosisButton->setGeometry(QRect(180, 220, 88, 26));
        phototableView = new QTableView(patientwindow);
        phototableView->setObjectName(QString::fromUtf8("phototableView"));
        phototableView->setGeometry(QRect(180, 320, 256, 192));
        returnButton = new QPushButton(patientwindow);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(260, 550, 88, 26));
        stackedWidget = new QStackedWidget(patientwindow);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(319, 79, 251, 171));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        doctortableView = new QTableView(page);
        doctortableView->setObjectName(QString::fromUtf8("doctortableView"));
        doctortableView->setGeometry(QRect(50, 30, 161, 111));
        doctortableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        doctortableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        medicalreportTableView = new QTableView(page_2);
        medicalreportTableView->setObjectName(QString::fromUtf8("medicalreportTableView"));
        medicalreportTableView->setGeometry(QRect(50, 30, 161, 111));
        medicalreportTableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        medicalreportTableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        checkdiagnosistableView = new QTableView(page_3);
        checkdiagnosistableView->setObjectName(QString::fromUtf8("checkdiagnosistableView"));
        checkdiagnosistableView->setGeometry(QRect(40, 40, 171, 121));
        checkdiagnosistableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        checkdiagnosistableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        stackedWidget->addWidget(page_3);
        communicationButton = new QPushButton(patientwindow);
        communicationButton->setObjectName(QString::fromUtf8("communicationButton"));
        communicationButton->setGeometry(QRect(50, 230, 88, 26));

        retranslateUi(patientwindow);

        QMetaObject::connectSlotsByName(patientwindow);
    } // setupUi

    void retranslateUi(QDialog *patientwindow)
    {
        patientwindow->setWindowTitle(QCoreApplication::translate("patientwindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("patientwindow", "\346\202\243\350\200\205\347\225\214\351\235\242", nullptr));
        editInfoButton->setText(QCoreApplication::translate("patientwindow", "\347\274\226\350\276\221\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        viewDoctorsButton->setText(QCoreApplication::translate("patientwindow", "\346\237\245\347\234\213\345\214\273\347\224\237\344\277\241\346\201\257", nullptr));
        makeAppointmentButton->setText(QCoreApplication::translate("patientwindow", "\351\242\204\347\272\246\345\260\261\350\257\212", nullptr));
        viewMedicalRecordsButton->setText(QCoreApplication::translate("patientwindow", "\346\237\245\347\234\213\347\227\205\344\276\213", nullptr));
        checkdiagnosisButton->setText(QCoreApplication::translate("patientwindow", "\346\237\245\347\234\213\350\257\212\346\226\255", nullptr));
        returnButton->setText(QCoreApplication::translate("patientwindow", "\350\277\224\345\233\236", nullptr));
        communicationButton->setText(QCoreApplication::translate("patientwindow", "\345\214\273\346\202\243\346\262\237\351\200\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class patientwindow: public Ui_patientwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTWINDOW_H
