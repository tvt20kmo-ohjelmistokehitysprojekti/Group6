#include "nostomuusumma.h"
#include "ui_nostomuusumma.h"
#include "nostoconfirm.h"
#include "mysingleton.h"


nostoMuuSumma::nostoMuuSumma(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nostoMuuSumma)
{
    ui->setupUi(this);
}

nostoMuuSumma::~nostoMuuSumma()
{
    delete ui;
}

void nostoMuuSumma::on_buttonBox_accepted()
{
    MySingleton *my = MySingleton::getInstance();

    my->setAmount(ui->lineEditReadSumma->text()+"€");

    nostoConfirm *nc = new nostoConfirm(my->getAmount());

    nc->show();
}
