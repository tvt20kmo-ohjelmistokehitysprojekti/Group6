#include "tapahtumat.h"
#include "ui_tapahtumat.h"

Tapahtumat::Tapahtumat(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Tapahtumat)
{
    ui->setupUi(this);
}

Tapahtumat::~Tapahtumat()
{
    delete ui;
}
