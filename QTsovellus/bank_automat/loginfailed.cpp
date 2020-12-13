#include "loginfailed.h"
#include "ui_loginfailed.h"
#include "mainwindow.h"
#include "QString"


loginfailed::loginfailed(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::loginfailed)
{
    ui->setupUi(this);
}

loginfailed::~loginfailed()
{
    delete ui;
    ui=nullptr;
}

void loginfailed::on_btnLoginFailedOK_clicked()
{
    this->close();
}
