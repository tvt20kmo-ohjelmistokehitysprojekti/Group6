/********************************************************************************
** Form generated from reading UI file 'saldo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALDO_H
#define UI_SALDO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SALDO
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *labelHeader;
    QPushButton *btnNostoTakaisin;
    QLabel *label_ShowLoggedInID;
    QLCDNumber *lcdSaldo;
    QPushButton *btnSaldoRefresh;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SALDO)
    {
        if (SALDO->objectName().isEmpty())
            SALDO->setObjectName(QString::fromUtf8("SALDO"));
        SALDO->resize(800, 600);
        centralwidget = new QWidget(SALDO);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 21, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 71, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 50, 61, 16));
        labelHeader = new QLabel(centralwidget);
        labelHeader->setObjectName(QString::fromUtf8("labelHeader"));
        labelHeader->setGeometry(QRect(340, 40, 111, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier"));
        font.setPointSize(36);
        font.setBold(false);
        font.setWeight(50);
        labelHeader->setFont(font);
        btnNostoTakaisin = new QPushButton(centralwidget);
        btnNostoTakaisin->setObjectName(QString::fromUtf8("btnNostoTakaisin"));
        btnNostoTakaisin->setGeometry(QRect(320, 510, 161, 41));
        label_ShowLoggedInID = new QLabel(centralwidget);
        label_ShowLoggedInID->setObjectName(QString::fromUtf8("label_ShowLoggedInID"));
        label_ShowLoggedInID->setGeometry(QRect(30, 30, 58, 16));
        lcdSaldo = new QLCDNumber(centralwidget);
        lcdSaldo->setObjectName(QString::fromUtf8("lcdSaldo"));
        lcdSaldo->setGeometry(QRect(270, 150, 251, 41));
        btnSaldoRefresh = new QPushButton(centralwidget);
        btnSaldoRefresh->setObjectName(QString::fromUtf8("btnSaldoRefresh"));
        btnSaldoRefresh->setGeometry(QRect(320, 210, 151, 31));
        SALDO->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SALDO);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        SALDO->setMenuBar(menubar);
        statusbar = new QStatusBar(SALDO);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SALDO->setStatusBar(statusbar);

        retranslateUi(SALDO);

        QMetaObject::connectSlotsByName(SALDO);
    } // setupUi

    void retranslateUi(QMainWindow *SALDO)
    {
        SALDO->setWindowTitle(QApplication::translate("SALDO", "MainWindow", nullptr));
        label->setText(QApplication::translate("SALDO", "ID:", nullptr));
        label_2->setText(QApplication::translate("SALDO", "Kirjauduttu", nullptr));
        label_3->setText(QApplication::translate("SALDO", "DEBIT", nullptr));
        labelHeader->setText(QApplication::translate("SALDO", "SALDO", nullptr));
        btnNostoTakaisin->setText(QApplication::translate("SALDO", "Takaisin", nullptr));
        label_ShowLoggedInID->setText(QApplication::translate("SALDO", "xxxx", nullptr));
        btnSaldoRefresh->setText(QApplication::translate("SALDO", "P\303\244ivit\303\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SALDO: public Ui_SALDO {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALDO_H
