#include "saldo.h"
#include "ui_saldo.h"
#include "mainwindowkirjauduttu.h"
#include "mysingleton.h"

SALDO::SALDO(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SALDO)
{
    ui->setupUi(this);
    MySingleton *my = MySingleton::getInstance();

    ui->label_ShowLoggedInID->setText(my->getIdaccounts());

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
