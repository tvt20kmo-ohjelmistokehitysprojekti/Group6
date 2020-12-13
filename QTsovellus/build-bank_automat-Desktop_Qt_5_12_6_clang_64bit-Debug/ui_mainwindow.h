/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *labelHeader;
    QLabel *label_2;
    QLineEdit *lineEditID;
    QPushButton *pushButtonLogIn;
    QLabel *label_3;
    QLineEdit *lineEditIDSalasana;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
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
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(330, 170, 131, 16));
        lineEditID = new QLineEdit(centralwidget);
        lineEditID->setObjectName(QString::fromUtf8("lineEditID"));
        lineEditID->setGeometry(QRect(330, 190, 131, 24));
        pushButtonLogIn = new QPushButton(centralwidget);
        pushButtonLogIn->setObjectName(QString::fromUtf8("pushButtonLogIn"));
        pushButtonLogIn->setGeometry(QRect(330, 280, 131, 24));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(330, 220, 131, 16));
        lineEditIDSalasana = new QLineEdit(centralwidget);
        lineEditIDSalasana->setObjectName(QString::fromUtf8("lineEditIDSalasana"));
        lineEditIDSalasana->setGeometry(QRect(330, 240, 131, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        labelHeader->setText(QApplication::translate("MainWindow", "MEGAPANKKI", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Pankkikortin ID:", nullptr));
        pushButtonLogIn->setText(QApplication::translate("MainWindow", "Kirjaudu", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Salasana:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
