#include "nostoconfirm.h"
#include "ui_nostoconfirm.h"

nostoConfirm::nostoConfirm(QString value, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nostoConfirm)
{
    ui->setupUi(this);

    ui->label_NostettavaSumma->setText(value);

}

nostoConfirm::~nostoConfirm()
{
    delete ui;
}



void nostoConfirm::on_buttonBoxConfirm_accepted()
{

}

void nostoConfirm::on_buttonBoxConfirm_rejected()
{
    this->close();
}
