/********************************************************************************
** Form generated from reading UI file 'mainwindowkirjauduttu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWKIRJAUDUTTU_H
#define UI_MAINWINDOWKIRJAUDUTTU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowKirjauduttu
{
public:
    QWidget *centralwidget;
    QLabel *labelHeader;
    QLabel *label;
    QLabel *label_ShowLoggedInID;
    QPushButton *btnNosto;
    QPushButton *btnSaldo;
    QPushButton *btnTapahtumat;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *btnKirjUlos;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowKirjauduttu)
    {
        if (MainWindowKirjauduttu->objectName().isEmpty())
            MainWindowKirjauduttu->setObjectName(QString::fromUtf8("MainWindowKirjauduttu"));
        MainWindowKirjauduttu->resize(800, 600);
        centralwidget = new QWidget(MainWindowKirjauduttu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        labelHeader = new QLabel(centralwidget);
        labelHeader->setObjectName(QString::fromUtf8("labelHeader"));
        labelHeader->setGeometry(QRect(290, 40, 211, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier"));
        font.setPointSize(36);
        font.setBold(false);
        font.setWeight(50);
        labelHeader->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 21, 16));
        label_ShowLoggedInID = new QLabel(centralwidget);
        label_ShowLoggedInID->setObjectName(QString::fromUtf8("label_ShowLoggedInID"));
        label_ShowLoggedInID->setGeometry(QRect(30, 30, 58, 16));
        btnNosto = new QPushButton(centralwidget);
        btnNosto->setObjectName(QString::fromUtf8("btnNosto"));
        btnNosto->setGeometry(QRect(310, 180, 171, 41));
        btnSaldo = new QPushButton(centralwidget);
        btnSaldo->setObjectName(QString::fromUtf8("btnSaldo"));
        btnSaldo->setGeometry(QRect(310, 250, 171, 41));
        btnTapahtumat = new QPushButton(centralwidget);
        btnTapahtumat->setObjectName(QString::fromUtf8("btnTapahtumat"));
        btnTapahtumat->setGeometry(QRect(310, 320, 171, 41));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 71, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 50, 61, 16));
        btnKirjUlos = new QPushButton(centralwidget);
        btnKirjUlos->setObjectName(QString::fromUtf8("btnKirjUlos"));
        btnKirjUlos->setGeometry(QRect(310, 510, 171, 41));
        MainWindowKirjauduttu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowKirjauduttu);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindowKirjauduttu->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowKirjauduttu);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindowKirjauduttu->setStatusBar(statusbar);

        retranslateUi(MainWindowKirjauduttu);

        QMetaObject::connectSlotsByName(MainWindowKirjauduttu);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowKirjauduttu)
    {
        MainWindowKirjauduttu->setWindowTitle(QApplication::translate("MainWindowKirjauduttu", "MainWindow", nullptr));
        labelHeader->setText(QApplication::translate("MainWindowKirjauduttu", "MEGAPANKKI", nullptr));
        label->setText(QApplication::translate("MainWindowKirjauduttu", "ID:", nullptr));
        label_ShowLoggedInID->setText(QApplication::translate("MainWindowKirjauduttu", "xxxx", nullptr));
        btnNosto->setText(QApplication::translate("MainWindowKirjauduttu", "NOSTO", nullptr));
        btnSaldo->setText(QApplication::translate("MainWindowKirjauduttu", "SALDO", nullptr));
        btnTapahtumat->setText(QApplication::translate("MainWindowKirjauduttu", "TAPAHTUMAT", nullptr));
        label_2->setText(QApplication::translate("MainWindowKirjauduttu", "Kirjauduttu", nullptr));
        label_3->setText(QApplication::translate("MainWindowKirjauduttu", "DEBIT", nullptr));
        btnKirjUlos->setText(QApplication::translate("MainWindowKirjauduttu", "Kirjaudu ulos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowKirjauduttu: public Ui_MainWindowKirjauduttu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWKIRJAUDUTTU_H
