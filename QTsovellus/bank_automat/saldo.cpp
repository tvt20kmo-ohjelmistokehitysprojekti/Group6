#include "saldo.h"
#include "ui_saldo.h"
#include "mainwindowkirjauduttu.h"
#include "mysingleton.h"
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <qjsondocument.h>
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

void SALDO::on_btnSaldoRefresh_clicked()
{

    MySingleton *my = MySingleton::getInstance();

    QString loginID = my->getIdaccounts();


       QNetworkRequest request(QUrl("http://www.students.oamk.fi/~t9alal00/Group6/index.php/accounts/"+loginID));
               request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

               QNetworkAccessManager nam;
                     QNetworkReply *reply = nam.get(request);
                     while (!reply->isFinished())
                     {
                         qApp->processEvents();
                     }
                     QByteArray response_data = reply->readAll();

                     //qDebug()<<"DATA:"+response_data;

                     reply->deleteLater();

                     QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
                     QJsonObject jsobj = json_doc.object();
                     QJsonArray jsarr = json_doc.array();


                     foreach (const QJsonValue &value, jsarr) {
                       QJsonObject jsob = value.toObject();
                       QString fyrkka=jsob["money"].toString();

                       ui->lcdSaldo->display(fyrkka);


}}
