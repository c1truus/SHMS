/********************************************************************************
** Form generated from reading UI file 'healthassessmentwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEALTHASSESSMENTWINDOW_H
#define UI_HEALTHASSESSMENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_healthassessmentwindow
{
public:
    QLabel *label;
    QTextEdit *assessmentTextEdit;
    QPushButton *submitAssessmentButton;
    QLineEdit *namelineEdit;
    QLineEdit *heightlineEdit;
    QLineEdit *weightlineEdit;
    QLineEdit *heartratelineEdit;
    QPushButton *returnButton;

    void setupUi(QDialog *healthassessmentwindow)
    {
        if (healthassessmentwindow->objectName().isEmpty())
            healthassessmentwindow->setObjectName(QString::fromUtf8("healthassessmentwindow"));
        healthassessmentwindow->resize(594, 679);
        label = new QLabel(healthassessmentwindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 30, 66, 18));
        assessmentTextEdit = new QTextEdit(healthassessmentwindow);
        assessmentTextEdit->setObjectName(QString::fromUtf8("assessmentTextEdit"));
        assessmentTextEdit->setGeometry(QRect(220, 330, 181, 70));
        submitAssessmentButton = new QPushButton(healthassessmentwindow);
        submitAssessmentButton->setObjectName(QString::fromUtf8("submitAssessmentButton"));
        submitAssessmentButton->setGeometry(QRect(150, 440, 88, 26));
        namelineEdit = new QLineEdit(healthassessmentwindow);
        namelineEdit->setObjectName(QString::fromUtf8("namelineEdit"));
        namelineEdit->setGeometry(QRect(240, 80, 113, 26));
        heightlineEdit = new QLineEdit(healthassessmentwindow);
        heightlineEdit->setObjectName(QString::fromUtf8("heightlineEdit"));
        heightlineEdit->setGeometry(QRect(240, 140, 151, 26));
        weightlineEdit = new QLineEdit(healthassessmentwindow);
        weightlineEdit->setObjectName(QString::fromUtf8("weightlineEdit"));
        weightlineEdit->setGeometry(QRect(240, 200, 141, 26));
        heartratelineEdit = new QLineEdit(healthassessmentwindow);
        heartratelineEdit->setObjectName(QString::fromUtf8("heartratelineEdit"));
        heartratelineEdit->setGeometry(QRect(240, 260, 161, 26));
        returnButton = new QPushButton(healthassessmentwindow);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(360, 440, 88, 26));

        retranslateUi(healthassessmentwindow);

        QMetaObject::connectSlotsByName(healthassessmentwindow);
    } // setupUi

    void retranslateUi(QDialog *healthassessmentwindow)
    {
        healthassessmentwindow->setWindowTitle(QCoreApplication::translate("healthassessmentwindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("healthassessmentwindow", "\345\201\245\345\272\267\350\257\204\344\274\260", nullptr));
        assessmentTextEdit->setPlaceholderText(QCoreApplication::translate("healthassessmentwindow", "\350\257\267\350\276\223\345\205\245\345\201\245\345\272\267\350\257\204\344\274\260\345\206\205\345\256\271  ...", nullptr));
        submitAssessmentButton->setText(QCoreApplication::translate("healthassessmentwindow", "\346\217\220\344\272\244\350\257\204\344\274\260", nullptr));
        namelineEdit->setPlaceholderText(QCoreApplication::translate("healthassessmentwindow", "\350\276\223\345\205\245\346\202\243\350\200\205\345\247\223\345\220\215", nullptr));
        heightlineEdit->setPlaceholderText(QCoreApplication::translate("healthassessmentwindow", "\350\276\223\345\205\245\346\202\243\350\200\205\350\272\253\351\253\230(cm)", nullptr));
        weightlineEdit->setPlaceholderText(QCoreApplication::translate("healthassessmentwindow", "\350\276\223\345\205\245\346\202\243\350\200\205\344\275\223\351\207\215(kg)", nullptr));
        heartratelineEdit->setPlaceholderText(QCoreApplication::translate("healthassessmentwindow", "\350\276\223\345\205\245\346\202\243\350\200\205\345\277\203\347\216\207(\346\254\241/\345\210\206\351\222\237)", nullptr));
        returnButton->setText(QCoreApplication::translate("healthassessmentwindow", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class healthassessmentwindow: public Ui_healthassessmentwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEALTHASSESSMENTWINDOW_H
