/********************************************************************************
** Form generated from reading UI file 'informationmanagementwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATIONMANAGEMENTWINDOW_H
#define UI_INFORMATIONMANAGEMENTWINDOW_H

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

class Ui_informationmanagementwindow
{
public:
    QLabel *label;
    QPushButton *viewDoctorInfoButton;
    QPushButton *viewMedicalRecordsButton;
    QPushButton *viewPrescriptionInfoButton;
    QPushButton *viewPatientInfoButton;
    QPushButton *viewAppointmentInfoButton;
    QPushButton *refreshDataButton;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTableView *doctorinfotableView;
    QWidget *page_2;
    QTableView *patientinfotableView;
    QWidget *page_3;
    QTableView *medicalrecordtableView;
    QWidget *page_4;
    QTableView *appointmenttableView;
    QWidget *page_5;
    QTableView *diagnosistableView;
    QPushButton *returnButton;

    void setupUi(QDialog *informationmanagementwindow)
    {
        if (informationmanagementwindow->objectName().isEmpty())
            informationmanagementwindow->setObjectName(QString::fromUtf8("informationmanagementwindow"));
        informationmanagementwindow->resize(608, 367);
        label = new QLabel(informationmanagementwindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 30, 66, 18));
        viewDoctorInfoButton = new QPushButton(informationmanagementwindow);
        viewDoctorInfoButton->setObjectName(QString::fromUtf8("viewDoctorInfoButton"));
        viewDoctorInfoButton->setGeometry(QRect(30, 90, 88, 26));
        viewMedicalRecordsButton = new QPushButton(informationmanagementwindow);
        viewMedicalRecordsButton->setObjectName(QString::fromUtf8("viewMedicalRecordsButton"));
        viewMedicalRecordsButton->setGeometry(QRect(30, 150, 88, 26));
        viewPrescriptionInfoButton = new QPushButton(informationmanagementwindow);
        viewPrescriptionInfoButton->setObjectName(QString::fromUtf8("viewPrescriptionInfoButton"));
        viewPrescriptionInfoButton->setGeometry(QRect(20, 220, 101, 26));
        viewPatientInfoButton = new QPushButton(informationmanagementwindow);
        viewPatientInfoButton->setObjectName(QString::fromUtf8("viewPatientInfoButton"));
        viewPatientInfoButton->setGeometry(QRect(140, 90, 88, 26));
        viewAppointmentInfoButton = new QPushButton(informationmanagementwindow);
        viewAppointmentInfoButton->setObjectName(QString::fromUtf8("viewAppointmentInfoButton"));
        viewAppointmentInfoButton->setGeometry(QRect(140, 150, 88, 26));
        refreshDataButton = new QPushButton(informationmanagementwindow);
        refreshDataButton->setObjectName(QString::fromUtf8("refreshDataButton"));
        refreshDataButton->setGeometry(QRect(140, 220, 88, 26));
        stackedWidget = new QStackedWidget(informationmanagementwindow);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(310, 90, 221, 191));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        doctorinfotableView = new QTableView(page);
        doctorinfotableView->setObjectName(QString::fromUtf8("doctorinfotableView"));
        doctorinfotableView->setGeometry(QRect(30, 30, 171, 131));
        doctorinfotableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        doctorinfotableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        patientinfotableView = new QTableView(page_2);
        patientinfotableView->setObjectName(QString::fromUtf8("patientinfotableView"));
        patientinfotableView->setGeometry(QRect(40, 40, 141, 111));
        patientinfotableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        patientinfotableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        medicalrecordtableView = new QTableView(page_3);
        medicalrecordtableView->setObjectName(QString::fromUtf8("medicalrecordtableView"));
        medicalrecordtableView->setGeometry(QRect(30, 30, 151, 121));
        medicalrecordtableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        medicalrecordtableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        appointmenttableView = new QTableView(page_4);
        appointmenttableView->setObjectName(QString::fromUtf8("appointmenttableView"));
        appointmenttableView->setGeometry(QRect(40, 40, 141, 111));
        appointmenttableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        appointmenttableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        diagnosistableView = new QTableView(page_5);
        diagnosistableView->setObjectName(QString::fromUtf8("diagnosistableView"));
        diagnosistableView->setGeometry(QRect(20, 30, 181, 131));
        diagnosistableView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        diagnosistableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        stackedWidget->addWidget(page_5);
        returnButton = new QPushButton(informationmanagementwindow);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(240, 300, 88, 26));

        retranslateUi(informationmanagementwindow);

        QMetaObject::connectSlotsByName(informationmanagementwindow);
    } // setupUi

    void retranslateUi(QDialog *informationmanagementwindow)
    {
        informationmanagementwindow->setWindowTitle(QCoreApplication::translate("informationmanagementwindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("informationmanagementwindow", "\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
        viewDoctorInfoButton->setText(QCoreApplication::translate("informationmanagementwindow", "\346\237\245\347\234\213\345\214\273\347\224\237\344\277\241\346\201\257", nullptr));
        viewMedicalRecordsButton->setText(QCoreApplication::translate("informationmanagementwindow", "\346\237\245\347\234\213\347\227\205\345\216\206\350\257\246\346\203\205", nullptr));
        viewPrescriptionInfoButton->setText(QCoreApplication::translate("informationmanagementwindow", "\346\237\245\347\234\213\350\257\212\346\226\255", nullptr));
        viewPatientInfoButton->setText(QCoreApplication::translate("informationmanagementwindow", "\346\237\245\347\234\213\346\202\243\350\200\205\344\277\241\346\201\257", nullptr));
        viewAppointmentInfoButton->setText(QCoreApplication::translate("informationmanagementwindow", "\346\237\245\347\234\213\351\242\204\347\272\246\350\257\246\346\203\205", nullptr));
        refreshDataButton->setText(QCoreApplication::translate("informationmanagementwindow", "\345\210\267\346\226\260\346\225\260\346\215\256", nullptr));
        returnButton->setText(QCoreApplication::translate("informationmanagementwindow", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class informationmanagementwindow: public Ui_informationmanagementwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATIONMANAGEMENTWINDOW_H
