#include "mainwindowkirjauduttu.h"
#include "ui_mainwindowkirjauduttu.h"
#include "nosto.h"
#include "saldo.h"
#include "tapahtumat.h"

MainWindowKirjauduttu::MainWindowKirjauduttu(QString CardID, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowKirjauduttu)
{
    ui->setupUi(this);
    ui->label_ShowLoggedInID->setText(CardID);
}

MainWindowKirjauduttu::~MainWindowKirjauduttu()
{

    delete ui;
    ui=nullptr;
}

void MainWindowKirjauduttu::on_btnNosto_clicked()
{
    NOSTO *nos=new NOSTO(NULL);
    nos->show();
    this->hide();
}

void MainWindowKirjauduttu::on_btnSaldo_clicked()
{
    SALDO *sal=new SALDO(NULL);
    sal->show();
    this->hide();
}

void MainWindowKirjauduttu::on_btnTapahtumat_clicked()
{
    TAPAHTUMAT *tap=new TAPAHTUMAT(NULL);
    tap->show();
    this->hide();
}

void MainWindowKirjauduttu::on_btnKirjUlos_clicked()
{
    this->hide();
}
