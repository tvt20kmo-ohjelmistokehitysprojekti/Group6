#include "nosto.h"
#include "ui_nosto.h"
#include "mainwindowkirjauduttu.h"
#include "nostomuusumma.h"
#include "nostoconfirm.h"

NOSTO::NOSTO(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NOSTO)
{
    ui->setupUi(this);

}

NOSTO::~NOSTO()
{
    delete ui;
}

void NOSTO::on_btnNostoTakaisin_clicked()
{
    MainWindowKirjauduttu *mwk = new MainWindowKirjauduttu(NULL);
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
   nostoConfirm *nc = new nostoConfirm("20€");

   nc->show();
}

void NOSTO::on_btnNosto40_clicked()
{
    nostoConfirm *nc = new nostoConfirm("40€");

    nc->show();
}

void NOSTO::on_btnNosto60_clicked()
{
    nostoConfirm *nc = new nostoConfirm("60€");

    nc->show();
}

void NOSTO::on_btnNosto80_clicked()
{
    nostoConfirm *nc = new nostoConfirm("80€");

    nc->show();
}

void NOSTO::on_btnNosto100_clicked()
{
    nostoConfirm *nc = new nostoConfirm("100€");

    nc->show();
}
