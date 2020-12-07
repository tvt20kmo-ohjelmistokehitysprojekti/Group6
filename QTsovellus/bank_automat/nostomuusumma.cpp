#include "nostomuusumma.h"
#include "ui_nostomuusumma.h"
#include "nostoconfirm.h"


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


    nostoConfirm *nc = new nostoConfirm(ui->lineEditReadSumma->text() +"€");

    nc->show();
}
