#include "nosto.h"
#include "ui_nosto.h"
#include "mainwindowkirjauduttu.h"
#include "nostomuusumma.h"
#include "nostoconfirm.h"
#include "mysingleton.h"

NOSTO::NOSTO(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NOSTO)
{
    ui->setupUi(this);
    MySingleton *my = MySingleton::getInstance();

    ui->label_ShowLoggedInID->setText(my->getIdaccounts());


}

NOSTO::~NOSTO()
{
    delete ui;
}

void NOSTO::on_btnNostoTakaisin_clicked()
{
    MainWindowKirjauduttu *mwk = new MainWindowKirjauduttu();
    this->hide();
    mwk->show();
}

void NOSTO::on_btnNostoMuu_clicked()
{
    nostoMuuSumma *nms = new nostoMuuSumma();


    nms->show();
}

void NOSTO::on_btnNosto20_clicked()
{
   MySingleton *my = MySingleton::getInstance();

   my->setAmount("20€");

   nostoConfirm *nc = new nostoConfirm(my->getAmount());

   nc->show();
}

void NOSTO::on_btnNosto40_clicked()
{
    MySingleton *my = MySingleton::getInstance();

    my->setAmount("40€");

    nostoConfirm *nc = new nostoConfirm(my->getAmount());

    nc->show();
}

void NOSTO::on_btnNosto60_clicked()
{
    MySingleton *my = MySingleton::getInstance();

    my->setAmount("60€");

    nostoConfirm *nc = new nostoConfirm(my->getAmount());

    nc->show();
}

void NOSTO::on_btnNosto80_clicked()
{
    MySingleton *my = MySingleton::getInstance();

    my->setAmount("80€");

    nostoConfirm *nc = new nostoConfirm(my->getAmount());

    nc->show();
}

void NOSTO::on_btnNosto100_clicked()
{
    MySingleton *my = MySingleton::getInstance();

    my->setAmount("100€");

    nostoConfirm *nc = new nostoConfirm(my->getAmount());

    nc->show();
}
