#include "tapahtumat.h"
#include "ui_tapahtumat.h"
#include "mainwindowkirjauduttu.h"
#include "mysingleton.h"

TAPAHTUMAT::TAPAHTUMAT(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TAPAHTUMAT)
{
    ui->setupUi(this);
    MySingleton *my = MySingleton::getInstance();

    ui->label_ShowLoggedInID->setText(my->getIdaccounts());

}

TAPAHTUMAT::~TAPAHTUMAT()
{
    delete ui;
    ui=nullptr;
}

void TAPAHTUMAT::on_btnNostoTakaisin_clicked()
{
    MainWindowKirjauduttu *mwk=new MainWindowKirjauduttu(NULL);
    this->hide();
    mwk->show();
}
