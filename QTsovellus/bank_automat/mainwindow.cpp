#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QString"
#include "mainwindowkirjauduttu.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    ui=nullptr;
}

void MainWindow::on_pushButtonLogIn_clicked()
{

    MainWindowKirjauduttu *mwk=new MainWindowKirjauduttu(ui->lineEditID->text());

    mwk->show();

}

