/********************************************************************************
** Form generated from reading UI file 'photouploadwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHOTOUPLOADWINDOW_H
#define UI_PHOTOUPLOADWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PhotoUploadWindow
{
public:
    QLabel *label;
    QPushButton *uploadphotoButton;
    QPushButton *checkphotoButton;
    QPushButton *deletephotoButton;
    QPushButton *returnButton;
    QScrollArea *photoscrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QDialog *PhotoUploadWindow)
    {
        if (PhotoUploadWindow->objectName().isEmpty())
            PhotoUploadWindow->setObjectName(QString::fromUtf8("PhotoUploadWindow"));
        PhotoUploadWindow->resize(595, 550);
        label = new QLabel(PhotoUploadWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 40, 101, 18));
        uploadphotoButton = new QPushButton(PhotoUploadWindow);
        uploadphotoButton->setObjectName(QString::fromUtf8("uploadphotoButton"));
        uploadphotoButton->setGeometry(QRect(110, 420, 88, 26));
        checkphotoButton = new QPushButton(PhotoUploadWindow);
        checkphotoButton->setObjectName(QString::fromUtf8("checkphotoButton"));
        checkphotoButton->setGeometry(QRect(260, 420, 88, 26));
        deletephotoButton = new QPushButton(PhotoUploadWindow);
        deletephotoButton->setObjectName(QString::fromUtf8("deletephotoButton"));
        deletephotoButton->setGeometry(QRect(410, 420, 88, 26));
        returnButton = new QPushButton(PhotoUploadWindow);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(260, 490, 88, 26));
        photoscrollArea = new QScrollArea(PhotoUploadWindow);
        photoscrollArea->setObjectName(QString::fromUtf8("photoscrollArea"));
        photoscrollArea->setGeometry(QRect(90, 90, 431, 281));
        photoscrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        photoscrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        photoscrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 429, 265));
        photoscrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(PhotoUploadWindow);

        QMetaObject::connectSlotsByName(PhotoUploadWindow);
    } // setupUi

    void retranslateUi(QDialog *PhotoUploadWindow)
    {
        PhotoUploadWindow->setWindowTitle(QCoreApplication::translate("PhotoUploadWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("PhotoUploadWindow", "\347\205\247\347\211\207\344\270\212\344\274\240\347\225\214\351\235\242", nullptr));
        uploadphotoButton->setText(QCoreApplication::translate("PhotoUploadWindow", "\344\270\212\344\274\240\347\205\247\347\211\207", nullptr));
        checkphotoButton->setText(QCoreApplication::translate("PhotoUploadWindow", "\346\237\245\347\234\213\347\205\247\347\211\207", nullptr));
        deletephotoButton->setText(QCoreApplication::translate("PhotoUploadWindow", "\345\210\240\351\231\244\347\205\247\347\211\207", nullptr));
        returnButton->setText(QCoreApplication::translate("PhotoUploadWindow", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PhotoUploadWindow: public Ui_PhotoUploadWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHOTOUPLOADWINDOW_H
