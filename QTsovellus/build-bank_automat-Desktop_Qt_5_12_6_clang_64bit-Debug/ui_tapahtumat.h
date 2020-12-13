/********************************************************************************
** Form generated from reading UI file 'tapahtumat.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAPAHTUMAT_H
#define UI_TAPAHTUMAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TAPAHTUMAT
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QLabel *labelHeader;
    QLabel *label;
    QLabel *label_ShowLoggedInID;
    QLabel *label_3;
    QPushButton *btnNostoTakaisin;
    QPushButton *btnTapahtumatRefresh;
    QTextEdit *textTapahtumat;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TAPAHTUMAT)
    {
        if (TAPAHTUMAT->objectName().isEmpty())
            TAPAHTUMAT->setObjectName(QString::fromUtf8("TAPAHTUMAT"));
        TAPAHTUMAT->resize(800, 600);
        centralwidget = new QWidget(TAPAHTUMAT);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 71, 16));
        labelHeader = new QLabel(centralwidget);
        labelHeader->setObjectName(QString::fromUtf8("labelHeader"));
        labelHeader->setGeometry(QRect(290, 40, 221, 51));
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
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 50, 61, 16));
        btnNostoTakaisin = new QPushButton(centralwidget);
        btnNostoTakaisin->setObjectName(QString::fromUtf8("btnNostoTakaisin"));
        btnNostoTakaisin->setGeometry(QRect(320, 510, 161, 41));
        btnTapahtumatRefresh = new QPushButton(centralwidget);
        btnTapahtumatRefresh->setObjectName(QString::fromUtf8("btnTapahtumatRefresh"));
        btnTapahtumatRefresh->setGeometry(QRect(320, 400, 161, 31));
        textTapahtumat = new QTextEdit(centralwidget);
        textTapahtumat->setObjectName(QString::fromUtf8("textTapahtumat"));
        textTapahtumat->setEnabled(true);
        textTapahtumat->setGeometry(QRect(230, 110, 341, 261));
        TAPAHTUMAT->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TAPAHTUMAT);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        TAPAHTUMAT->setMenuBar(menubar);
        statusbar = new QStatusBar(TAPAHTUMAT);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        TAPAHTUMAT->setStatusBar(statusbar);

        retranslateUi(TAPAHTUMAT);

        QMetaObject::connectSlotsByName(TAPAHTUMAT);
    } // setupUi

    void retranslateUi(QMainWindow *TAPAHTUMAT)
    {
        TAPAHTUMAT->setWindowTitle(QApplication::translate("TAPAHTUMAT", "MainWindow", nullptr));
        label_2->setText(QApplication::translate("TAPAHTUMAT", "Kirjauduttu", nullptr));
        labelHeader->setText(QApplication::translate("TAPAHTUMAT", "TAPAHTUMAT", nullptr));
        label->setText(QApplication::translate("TAPAHTUMAT", "ID:", nullptr));
        label_ShowLoggedInID->setText(QApplication::translate("TAPAHTUMAT", "xxxx", nullptr));
        label_3->setText(QApplication::translate("TAPAHTUMAT", "DEBIT", nullptr));
        btnNostoTakaisin->setText(QApplication::translate("TAPAHTUMAT", "Takaisin", nullptr));
        btnTapahtumatRefresh->setText(QApplication::translate("TAPAHTUMAT", "P\303\244ivit\303\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TAPAHTUMAT: public Ui_TAPAHTUMAT {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAPAHTUMAT_H
