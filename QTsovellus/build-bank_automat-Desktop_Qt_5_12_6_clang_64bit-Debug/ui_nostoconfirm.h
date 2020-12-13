/********************************************************************************
** Form generated from reading UI file 'nostoconfirm.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOSTOCONFIRM_H
#define UI_NOSTOCONFIRM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_nostoConfirm
{
public:
    QDialogButtonBox *buttonBoxConfirm;
    QLabel *label;
    QLabel *label_NostettavaSumma;

    void setupUi(QDialog *nostoConfirm)
    {
        if (nostoConfirm->objectName().isEmpty())
            nostoConfirm->setObjectName(QString::fromUtf8("nostoConfirm"));
        nostoConfirm->resize(400, 300);
        buttonBoxConfirm = new QDialogButtonBox(nostoConfirm);
        buttonBoxConfirm->setObjectName(QString::fromUtf8("buttonBoxConfirm"));
        buttonBoxConfirm->setGeometry(QRect(110, 200, 171, 32));
        buttonBoxConfirm->setOrientation(Qt::Horizontal);
        buttonBoxConfirm->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(nostoConfirm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 50, 271, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier"));
        font.setPointSize(18);
        label->setFont(font);
        label_NostettavaSumma = new QLabel(nostoConfirm);
        label_NostettavaSumma->setObjectName(QString::fromUtf8("label_NostettavaSumma"));
        label_NostettavaSumma->setGeometry(QRect(180, 120, 171, 31));
        QFont font1;
        font1.setPointSize(24);
        label_NostettavaSumma->setFont(font1);

        retranslateUi(nostoConfirm);

        QMetaObject::connectSlotsByName(nostoConfirm);
    } // setupUi

    void retranslateUi(QDialog *nostoConfirm)
    {
        nostoConfirm->setWindowTitle(QApplication::translate("nostoConfirm", "Dialog", nullptr));
        label->setText(QApplication::translate("nostoConfirm", "Vahvista nostettava summa", nullptr));
        label_NostettavaSumma->setText(QApplication::translate("nostoConfirm", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class nostoConfirm: public Ui_nostoConfirm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTOCONFIRM_H
