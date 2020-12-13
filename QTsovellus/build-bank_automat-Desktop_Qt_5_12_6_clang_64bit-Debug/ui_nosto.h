/********************************************************************************
** Form generated from reading UI file 'nosto.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOSTO_H
#define UI_NOSTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NOSTO
{
public:
    QWidget *centralwidget;
    QLabel *label_3;
    QLabel *labelHeader;
    QLabel *label_2;
    QLabel *label_ShowLoggedInID;
    QPushButton *btnNosto20;
    QPushButton *btnNosto40;
    QLabel *label;
    QPushButton *btnNosto60;
    QPushButton *btnNosto100;
    QPushButton *btnNosto80;
    QPushButton *btnNostoTakaisin;
    QPushButton *btnNostoMuu;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *NOSTO)
    {
        if (NOSTO->objectName().isEmpty())
            NOSTO->setObjectName(QString::fromUtf8("NOSTO"));
        NOSTO->resize(800, 600);
        centralwidget = new QWidget(NOSTO);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
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
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 71, 16));
        label_ShowLoggedInID = new QLabel(centralwidget);
        label_ShowLoggedInID->setObjectName(QString::fromUtf8("label_ShowLoggedInID"));
        label_ShowLoggedInID->setGeometry(QRect(30, 30, 58, 16));
        btnNosto20 = new QPushButton(centralwidget);
        btnNosto20->setObjectName(QString::fromUtf8("btnNosto20"));
        btnNosto20->setGeometry(QRect(310, 130, 171, 41));
        btnNosto40 = new QPushButton(centralwidget);
        btnNosto40->setObjectName(QString::fromUtf8("btnNosto40"));
        btnNosto40->setGeometry(QRect(310, 180, 171, 41));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 21, 16));
        btnNosto60 = new QPushButton(centralwidget);
        btnNosto60->setObjectName(QString::fromUtf8("btnNosto60"));
        btnNosto60->setGeometry(QRect(310, 230, 171, 41));
        btnNosto100 = new QPushButton(centralwidget);
        btnNosto100->setObjectName(QString::fromUtf8("btnNosto100"));
        btnNosto100->setGeometry(QRect(310, 330, 171, 41));
        btnNosto80 = new QPushButton(centralwidget);
        btnNosto80->setObjectName(QString::fromUtf8("btnNosto80"));
        btnNosto80->setGeometry(QRect(310, 280, 171, 41));
        btnNostoTakaisin = new QPushButton(centralwidget);
        btnNostoTakaisin->setObjectName(QString::fromUtf8("btnNostoTakaisin"));
        btnNostoTakaisin->setGeometry(QRect(310, 510, 171, 41));
        btnNostoMuu = new QPushButton(centralwidget);
        btnNostoMuu->setObjectName(QString::fromUtf8("btnNostoMuu"));
        btnNostoMuu->setGeometry(QRect(310, 380, 171, 41));
        NOSTO->setCentralWidget(centralwidget);
        menubar = new QMenuBar(NOSTO);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        NOSTO->setMenuBar(menubar);
        statusbar = new QStatusBar(NOSTO);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        NOSTO->setStatusBar(statusbar);

        retranslateUi(NOSTO);

        QMetaObject::connectSlotsByName(NOSTO);
    } // setupUi

    void retranslateUi(QMainWindow *NOSTO)
    {
        NOSTO->setWindowTitle(QApplication::translate("NOSTO", "MainWindow", nullptr));
        label_3->setText(QApplication::translate("NOSTO", "DEBIT", nullptr));
        labelHeader->setText(QApplication::translate("NOSTO", "NOSTO", nullptr));
        label_2->setText(QApplication::translate("NOSTO", "Kirjauduttu", nullptr));
        label_ShowLoggedInID->setText(QApplication::translate("NOSTO", "xxxx", nullptr));
        btnNosto20->setText(QApplication::translate("NOSTO", "20\342\202\254", nullptr));
        btnNosto40->setText(QApplication::translate("NOSTO", "40\342\202\254", nullptr));
        label->setText(QApplication::translate("NOSTO", "ID:", nullptr));
        btnNosto60->setText(QApplication::translate("NOSTO", "60\342\202\254", nullptr));
        btnNosto100->setText(QApplication::translate("NOSTO", "100\342\202\254", nullptr));
        btnNosto80->setText(QApplication::translate("NOSTO", "80\342\202\254", nullptr));
        btnNostoTakaisin->setText(QApplication::translate("NOSTO", "Takaisin", nullptr));
        btnNostoMuu->setText(QApplication::translate("NOSTO", "MUU SUMMA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NOSTO: public Ui_NOSTO {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTO_H
