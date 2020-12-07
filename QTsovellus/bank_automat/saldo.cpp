#include "saldo.h"
#include "ui_saldo.h"
#include "mainwindowkirjauduttu.h"

SALDO::SALDO(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SALDO)
{
    ui->setupUi(this);
}

SALDO::~SALDO()
{
    delete ui;
    ui=nullptr;
}

void SALDO::on_btnNostoTakaisin_clicked()
{
    MainWindowKirjauduttu *mwk=new MainWindowKirjauduttu(NULL);
    this->hide();
    mwk->show();
}
