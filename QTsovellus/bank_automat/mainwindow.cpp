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
}

void MainWindow::on_pushButtonLogIn_clicked()
{
    QString CardID = ui->lineEditID->text();
    MainWindowKirjauduttu *mwk=new MainWindowKirjauduttu();
    mwk->show();
}

