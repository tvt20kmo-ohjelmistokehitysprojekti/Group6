#include "saldo.h"
#include "ui_saldo.h"

Saldo::Saldo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Saldo)
{
    ui->setupUi(this);
}

Saldo::~Saldo()
{
    delete ui;
}
