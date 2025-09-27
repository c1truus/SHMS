/********************************************************************************
** Form generated from reading UI file 'doctorwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCTORWINDOW_H
#define UI_DOCTORWINDOW_H

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

class Ui_doctorwindow
{
public:
    QLabel *label;
    QPushButton *editInfoButton;
    QPushButton *viewMedicalRecordsButton;
    QPushButton *generateReportButton;
    QPushButton *viewAppointmentsButton;
    QPushButton *submitDiagnosisButton;
    QPushButton *returnButton;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTableView *appointmentTableView;
    QWidget *page_3;
    QTableView *generatereporttableView;
    QWidget *page_2;
    QTableView *medicalrecordtableView;
    QPushButton *photouploadButton;
    QPushButton *communicationButton;
    QPushButton *healthassessmentButton;

    void setupUi(QDialog *doctorwindow)
    {
        if (doctorwindow->objectName().isEmpty())
            doctorwindow->setObjectName(QString::fromUtf8("doctorwindow"));
        doctorwindow->resize(616, 358);
        label = new QLabel(doctorwindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 40, 66, 18));
        editInfoButton = new QPushButton(doctorwindow);
        editInfoButton->setObjectName(QString::fromUtf8("editInfoButton"));
        editInfoButton->setGeometry(QRect(90, 90, 88, 26));
        viewMedicalRecordsButton = new QPushButton(doctorwindow);
        viewMedicalRecordsButton->setObjectName(QString::fromUtf8("viewMedicalRecordsButton"));
        viewMedicalRecordsButton->setGeometry(QRect(90, 140, 88, 26));
        generateReportButton = new QPushButton(doctorwindow);
        generateReportButton->setObjectName(QString::fromUtf8("generateReportButton"));
        generateReportButton->setGeometry(QRect(210, 140, 88, 26));
        viewAppointmentsButton = new QPushButton(doctorwindow);
        viewAppointmentsButton->setObjectName(QString::fromUtf8("viewAppointmentsButton"));
        viewAppointmentsButton->setGeometry(QRect(190, 90, 131, 26));
        submitDiagnosisButton = new QPushButton(doctorwindow);
        submitDiagnosisButton->setObjectName(QString::fromUtf8("submitDiagnosisButton"));
        submitDiagnosisButton->setGeometry(QRect(90, 200, 88, 26));
        returnButton = new QPushButton(doctorwindow);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(260, 310, 88, 26));
        stackedWidget = new QStackedWidget(doctorwindow);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(329, 109, 221, 191));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        appointmentTableView = new QTableView(page);
        appointmentTableView->setObjectName(QString::fromUtf8("appointmentTableView"));
        appointmentTableView->setGeometry(QRect(20, 30, 161, 141));
        appointmentTableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        appointmentTableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        generatereporttableView = new QTableView(page_3);
        generatereporttableView->setObjectName(QString::fromUtf8("generatereporttableView"));
        generatereporttableView->setGeometry(QRect(-20, 0, 221, 171));
        generatereporttableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        generatereporttableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        medicalrecordtableView = new QTableView(page_2);
        medicalrecordtableView->setObjectName(QString::fromUtf8("medicalrecordtableView"));
        medicalrecordtableView->setGeometry(QRect(40, 40, 161, 111));
        medicalrecordtableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        medicalrecordtableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        stackedWidget->addWidget(page_2);
        photouploadButton = new QPushButton(doctorwindow);
        photouploadButton->setObjectName(QString::fromUtf8("photouploadButton"));
        photouploadButton->setGeometry(QRect(210, 200, 88, 26));
        communicationButton = new QPushButton(doctorwindow);
        communicationButton->setObjectName(QString::fromUtf8("communicationButton"));
        communicationButton->setGeometry(QRect(90, 270, 111, 26));
        healthassessmentButton = new QPushButton(doctorwindow);
        healthassessmentButton->setObjectName(QString::fromUtf8("healthassessmentButton"));
        healthassessmentButton->setGeometry(QRect(230, 270, 88, 26));

        retranslateUi(doctorwindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(doctorwindow);
    } // setupUi

    void retranslateUi(QDialog *doctorwindow)
    {
        doctorwindow->setWindowTitle(QCoreApplication::translate("doctorwindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("doctorwindow", "\345\214\273\347\224\237\347\225\214\351\235\242", nullptr));
        editInfoButton->setText(QCoreApplication::translate("doctorwindow", "\347\274\226\350\276\221\344\270\252\344\272\272\344\277\241\346\201\257", nullptr));
        viewMedicalRecordsButton->setText(QCoreApplication::translate("doctorwindow", "\346\237\245\347\234\213\347\227\205\345\216\206\350\257\246\346\203\205", nullptr));
        generateReportButton->setText(QCoreApplication::translate("doctorwindow", "\347\224\237\346\210\220\346\225\260\346\215\256\345\233\276\350\241\250", nullptr));
        viewAppointmentsButton->setText(QCoreApplication::translate("doctorwindow", "\346\237\245\347\234\213\351\242\204\347\272\246\346\202\243\350\200\205\344\277\241\346\201\257", nullptr));
        submitDiagnosisButton->setText(QCoreApplication::translate("doctorwindow", "\350\276\223\345\205\245\350\257\212\346\226\255", nullptr));
        returnButton->setText(QCoreApplication::translate("doctorwindow", "\350\277\224\345\233\236", nullptr));
        photouploadButton->setText(QCoreApplication::translate("doctorwindow", "\347\205\247\347\211\207\344\270\212\344\274\240", nullptr));
        communicationButton->setText(QCoreApplication::translate("doctorwindow", "\350\277\233\345\205\245\350\201\212\345\244\251\347\225\214\351\235\242", nullptr));
        healthassessmentButton->setText(QCoreApplication::translate("doctorwindow", "\345\201\245\345\272\267\350\257\204\344\274\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class doctorwindow: public Ui_doctorwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCTORWINDOW_H
