/********************************************************************************
** Form generated from reading UI file 'nostomuusumma.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOSTOMUUSUMMA_H
#define UI_NOSTOMUUSUMMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_nostoMuuSumma
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *lineEditReadSumma;

    void setupUi(QDialog *nostoMuuSumma)
    {
        if (nostoMuuSumma->objectName().isEmpty())
            nostoMuuSumma->setObjectName(QString::fromUtf8("nostoMuuSumma"));
        nostoMuuSumma->resize(400, 300);
        buttonBox = new QDialogButtonBox(nostoMuuSumma);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(120, 200, 161, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(nostoMuuSumma);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 50, 241, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier"));
        font.setPointSize(18);
        label->setFont(font);
        lineEditReadSumma = new QLineEdit(nostoMuuSumma);
        lineEditReadSumma->setObjectName(QString::fromUtf8("lineEditReadSumma"));
        lineEditReadSumma->setGeometry(QRect(130, 120, 141, 31));

        retranslateUi(nostoMuuSumma);
        QObject::connect(buttonBox, SIGNAL(accepted()), nostoMuuSumma, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), nostoMuuSumma, SLOT(reject()));

        QMetaObject::connectSlotsByName(nostoMuuSumma);
    } // setupUi

    void retranslateUi(QDialog *nostoMuuSumma)
    {
        nostoMuuSumma->setWindowTitle(QApplication::translate("nostoMuuSumma", "Dialog", nullptr));
        label->setText(QApplication::translate("nostoMuuSumma", "Sy\303\266t\303\244 nostettava summa", nullptr));
    } // retranslateUi

};

namespace Ui {
    class nostoMuuSumma: public Ui_nostoMuuSumma {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTOMUUSUMMA_H
