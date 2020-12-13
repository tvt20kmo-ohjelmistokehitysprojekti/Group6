#include "mainwindow.h"
#include "mainwindowkirjauduttu.h"
#include "ui_mainwindowkirjauduttu.h"
#include "nosto.h"
#include "saldo.h"
#include "tapahtumat.h"
#include "mysingleton.h"
#include "loginfailed.h"

MainWindowKirjauduttu::MainWindowKirjauduttu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowKirjauduttu)
{

    ui->setupUi(this);
    MySingleton *my = MySingleton::getInstance();

    ui->label_ShowLoggedInID->setText(my->getIdaccounts());


}

MainWindowKirjauduttu::~MainWindowKirjauduttu()
{

    delete ui;
    ui=nullptr;
}

void MainWindowKirjauduttu::on_btnNosto_clicked()
{
    NOSTO *nos=new NOSTO();
    nos->show();
    this->hide();
}

void MainWindowKirjauduttu::on_btnSaldo_clicked()
{
    SALDO *sal=new SALDO();
    sal->show();
    this->hide();
}

void MainWindowKirjauduttu::on_btnTapahtumat_clicked()
{
    TAPAHTUMAT *tap=new TAPAHTUMAT();
    tap->show();
    this->hide();
}

void MainWindowKirjauduttu::on_btnKirjUlos_clicked()
{
    MainWindow *mw = new MainWindow();
    this->hide();
    mw->show();
}
