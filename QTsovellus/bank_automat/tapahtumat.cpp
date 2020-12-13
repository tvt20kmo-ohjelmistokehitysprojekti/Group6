#include "tapahtumat.h"
#include "ui_tapahtumat.h"
#include "mainwindowkirjauduttu.h"
#include "mysingleton.h"
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <qjsondocument.h>
#include "mysingleton.h"
#include "QTableView"


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
    MainWindowKirjauduttu *mwk=new MainWindowKirjauduttu();
    this->hide();
    mwk->show();
}

void TAPAHTUMAT::on_btnTapahtumatRefresh_clicked()
{
    MySingleton *my = MySingleton::getInstance();

    QString loginID = my->getIdaccounts();


       QNetworkRequest request(QUrl("http://www.students.oamk.fi/~t9alal00/Group6/index.php/history/?id="+loginID));
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
                     QJsonArray jsarr = json_doc.array();
                     QString tapahtumat;

                     foreach (const QJsonValue &value, jsarr)
                     {
                       QJsonObject jsob = value.toObject();
                       tapahtumat="Kortin ID: "+jsob["idaccounts"].toString()+", Nostettu: "+jsob["amount"].toString()+"€"+"\r";



                       ui->textTapahtumat->setText(response_data);

                     }
}
