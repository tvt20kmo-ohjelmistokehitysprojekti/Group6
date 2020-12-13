#include "nostoconfirm.h"
#include "ui_nostoconfirm.h"
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <qjsondocument.h>
#include "mainwindowkirjauduttu.h"
#include "mysingleton.h"

nostoConfirm::nostoConfirm(QString bringSumma, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nostoConfirm)
{
    ui->setupUi(this);

    MySingleton *my = MySingleton::getInstance();

    QString conrfirmAmount = my->getAmount();

    ui->label_NostettavaSumma->setText(bringSumma);


}

nostoConfirm::~nostoConfirm()
{
    delete ui;
    ui=nullptr;
}



void nostoConfirm::on_buttonBoxConfirm_accepted()
{

    MySingleton *my = MySingleton::getInstance();

    QString id = my->getIdaccounts();
    QString amount = my->getAmount();


    QJsonObject json;
         json.insert("id",id);
         json.insert("amount",amount);

         QNetworkRequest request(QUrl("http://www.students.oamk.fi/~t9alal00/Group6/index.php/nosto"));
                 request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");


         QNetworkAccessManager nam;
         QNetworkReply *reply = nam.post(request, QJsonDocument(json).toJson());
         while (!reply->isFinished())
         {
             qApp->processEvents();
         }
         QByteArray response_data = reply->readAll();

         //qDebug()<<response_data;

         if(response_data == "true")
         {
         ui->label->setText("Nosto onnistui");
         }

         else
         ui->label->setText("Nosto epäonnistui");



         reply->deleteLater();


}

void nostoConfirm::on_buttonBoxConfirm_rejected()
{
    this->close();
}
