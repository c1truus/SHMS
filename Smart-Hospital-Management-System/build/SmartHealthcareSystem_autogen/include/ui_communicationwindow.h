/********************************************************************************
** Form generated from reading UI file 'communicationwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMUNICATIONWINDOW_H
#define UI_COMMUNICATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_communicationwindow
{
public:
    QLabel *label;
    QTextEdit *chatDisplayTextEdit;
    QLineEdit *messageLineEdit;
    QPushButton *sendMessageButton;
    QPushButton *viewChatHistoryButton;
    QPushButton *returnButton;

    void setupUi(QDialog *communicationwindow)
    {
        if (communicationwindow->objectName().isEmpty())
            communicationwindow->setObjectName(QString::fromUtf8("communicationwindow"));
        communicationwindow->resize(658, 362);
        label = new QLabel(communicationwindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 50, 111, 18));
        QFont font;
        font.setFamily(QString::fromUtf8("AR PL UKai CN"));
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);
        chatDisplayTextEdit = new QTextEdit(communicationwindow);
        chatDisplayTextEdit->setObjectName(QString::fromUtf8("chatDisplayTextEdit"));
        chatDisplayTextEdit->setGeometry(QRect(240, 160, 111, 31));
        chatDisplayTextEdit->setReadOnly(true);
        messageLineEdit = new QLineEdit(communicationwindow);
        messageLineEdit->setObjectName(QString::fromUtf8("messageLineEdit"));
        messageLineEdit->setGeometry(QRect(240, 100, 113, 26));
        QFont font1;
        font1.setFamily(QString::fromUtf8("AR PL UKai CN"));
        messageLineEdit->setFont(font1);
        sendMessageButton = new QPushButton(communicationwindow);
        sendMessageButton->setObjectName(QString::fromUtf8("sendMessageButton"));
        sendMessageButton->setGeometry(QRect(190, 220, 88, 26));
        QFont font2;
        font2.setFamily(QString::fromUtf8("AR PL UKai CN"));
        font2.setBold(true);
        sendMessageButton->setFont(font2);
        viewChatHistoryButton = new QPushButton(communicationwindow);
        viewChatHistoryButton->setObjectName(QString::fromUtf8("viewChatHistoryButton"));
        viewChatHistoryButton->setGeometry(QRect(330, 220, 101, 26));
        viewChatHistoryButton->setFont(font2);
        returnButton = new QPushButton(communicationwindow);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(260, 270, 88, 26));

        retranslateUi(communicationwindow);

        QMetaObject::connectSlotsByName(communicationwindow);
    } // setupUi

    void retranslateUi(QDialog *communicationwindow)
    {
        communicationwindow->setWindowTitle(QCoreApplication::translate("communicationwindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("communicationwindow", "\345\214\273\346\202\243\346\262\237\351\200\232\345\271\263\345\217\260", nullptr));
        messageLineEdit->setPlaceholderText(QCoreApplication::translate("communicationwindow", "\350\276\223\345\205\245\346\266\210\346\201\257", nullptr));
        sendMessageButton->setText(QCoreApplication::translate("communicationwindow", "\345\217\221\351\200\201\346\266\210\346\201\257", nullptr));
        viewChatHistoryButton->setText(QCoreApplication::translate("communicationwindow", "\346\237\245\347\234\213\345\216\206\345\217\262\350\256\260\345\275\225", nullptr));
        returnButton->setText(QCoreApplication::translate("communicationwindow", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class communicationwindow: public Ui_communicationwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMUNICATIONWINDOW_H
