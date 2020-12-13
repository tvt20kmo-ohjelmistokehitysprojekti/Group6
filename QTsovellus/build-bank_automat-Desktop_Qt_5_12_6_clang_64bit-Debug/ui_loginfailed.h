/********************************************************************************
** Form generated from reading UI file 'loginfailed.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINFAILED_H
#define UI_LOGINFAILED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginfailed
{
public:
    QPushButton *btnLoginFailedOK;
    QLabel *label;

    void setupUi(QWidget *loginfailed)
    {
        if (loginfailed->objectName().isEmpty())
            loginfailed->setObjectName(QString::fromUtf8("loginfailed"));
        loginfailed->resize(400, 300);
        btnLoginFailedOK = new QPushButton(loginfailed);
        btnLoginFailedOK->setObjectName(QString::fromUtf8("btnLoginFailedOK"));
        btnLoginFailedOK->setGeometry(QRect(140, 190, 121, 31));
        label = new QLabel(loginfailed);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 50, 301, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier"));
        font.setPointSize(24);
        label->setFont(font);

        retranslateUi(loginfailed);

        QMetaObject::connectSlotsByName(loginfailed);
    } // setupUi

    void retranslateUi(QWidget *loginfailed)
    {
        loginfailed->setWindowTitle(QApplication::translate("loginfailed", "Form", nullptr));
        btnLoginFailedOK->setText(QApplication::translate("loginfailed", "no voi helekkari", nullptr));
        label->setText(QApplication::translate("loginfailed", "V\303\244\303\244r\303\244 ID tai salasana", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginfailed: public Ui_loginfailed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINFAILED_H
