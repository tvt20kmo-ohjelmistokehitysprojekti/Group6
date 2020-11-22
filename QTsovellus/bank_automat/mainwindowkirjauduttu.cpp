#include "mainwindowkirjauduttu.h"
#include "ui_mainwindowkirjauduttu.h"

MainWindowKirjauduttu::MainWindowKirjauduttu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowKirjauduttu)
{
    ui->setupUi(this);
}

MainWindowKirjauduttu::~MainWindowKirjauduttu()
{
    delete ui;
}
