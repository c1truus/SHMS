/********************************************************************************
** Form generated from reading UI file 'diagnosiswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIAGNOSISWINDOW_H
#define UI_DIAGNOSISWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_DiagnosisWindow
{
public:
    QLabel *label;
    QTextEdit *diagnosisdescriptiontextEdit;
    QLineEdit *diagnosisnamelineEdit;
    QLineEdit *patientfullnamelineEdit;
    QLineEdit *patientcontactlineEdit;
    QPushButton *uploadButton;
    QPushButton *returnButton;

    void setupUi(QDialog *DiagnosisWindow)
    {
        if (DiagnosisWindow->objectName().isEmpty())
            DiagnosisWindow->setObjectName(QString::fromUtf8("DiagnosisWindow"));
        DiagnosisWindow->resize(659, 370);
        label = new QLabel(DiagnosisWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(290, 30, 66, 18));
        diagnosisdescriptiontextEdit = new QTextEdit(DiagnosisWindow);
        diagnosisdescriptiontextEdit->setObjectName(QString::fromUtf8("diagnosisdescriptiontextEdit"));
        diagnosisdescriptiontextEdit->setGeometry(QRect(200, 200, 261, 111));
        diagnosisnamelineEdit = new QLineEdit(DiagnosisWindow);
        diagnosisnamelineEdit->setObjectName(QString::fromUtf8("diagnosisnamelineEdit"));
        diagnosisnamelineEdit->setGeometry(QRect(280, 140, 113, 26));
        patientfullnamelineEdit = new QLineEdit(DiagnosisWindow);
        patientfullnamelineEdit->setObjectName(QString::fromUtf8("patientfullnamelineEdit"));
        patientfullnamelineEdit->setGeometry(QRect(170, 70, 113, 26));
        patientcontactlineEdit = new QLineEdit(DiagnosisWindow);
        patientcontactlineEdit->setObjectName(QString::fromUtf8("patientcontactlineEdit"));
        patientcontactlineEdit->setGeometry(QRect(340, 70, 161, 26));
        uploadButton = new QPushButton(DiagnosisWindow);
        uploadButton->setObjectName(QString::fromUtf8("uploadButton"));
        uploadButton->setGeometry(QRect(190, 330, 88, 26));
        returnButton = new QPushButton(DiagnosisWindow);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(360, 330, 88, 26));

        retranslateUi(DiagnosisWindow);

        QMetaObject::connectSlotsByName(DiagnosisWindow);
    } // setupUi

    void retranslateUi(QDialog *DiagnosisWindow)
    {
        DiagnosisWindow->setWindowTitle(QCoreApplication::translate("DiagnosisWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DiagnosisWindow", "\350\276\223\345\205\245\350\257\212\346\226\255", nullptr));
        diagnosisdescriptiontextEdit->setPlaceholderText(QCoreApplication::translate("DiagnosisWindow", "\350\276\223\345\205\245\347\227\205\346\203\205\346\217\217\350\277\260....", nullptr));
        diagnosisnamelineEdit->setPlaceholderText(QCoreApplication::translate("DiagnosisWindow", "\350\276\223\345\205\245\350\257\212\346\226\255\345\220\215\350\257\215", nullptr));
        patientfullnamelineEdit->setPlaceholderText(QCoreApplication::translate("DiagnosisWindow", "\350\276\223\345\205\245\346\202\243\350\200\205\345\205\250\345\220\215", nullptr));
        patientcontactlineEdit->setPlaceholderText(QCoreApplication::translate("DiagnosisWindow", "\350\276\223\345\205\245\346\202\243\350\200\205\350\201\224\347\263\273\344\277\241\346\201\257", nullptr));
        uploadButton->setText(QCoreApplication::translate("DiagnosisWindow", "\347\241\256\350\256\244\346\217\220\344\272\244", nullptr));
        returnButton->setText(QCoreApplication::translate("DiagnosisWindow", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DiagnosisWindow: public Ui_DiagnosisWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIAGNOSISWINDOW_H
