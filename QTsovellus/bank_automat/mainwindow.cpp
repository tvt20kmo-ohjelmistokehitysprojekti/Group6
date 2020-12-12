#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QString"
#include "mainwindowkirjauduttu.h"
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <qjsondocument.h>
#include "mysingleton.h"



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
    MySingleton *my = MySingleton::getInstance();
    my->setIdaccounts(ui->lineEditID->text());



    MainWindowKirjauduttu *mwk=new MainWindowKirjauduttu();
    mwk->show();




 //------------------------------------------



  /*  QString id_acc, passw;
       id_acc=ui->lineEditID->text();
       passw=ui->lineEditIDSalasana->text();


       QNetworkRequest request(QUrl("http://www.students.oamk.fi/~t9alal00/Group6/accounts/"));
               request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

               QNetworkAccessManager nam;
                      QNetworkReply *reply = nam.get(request);
                      while (!reply->isFinished())
                      {
                          qApp->processEvents();
                      }
                      QByteArray response_data = reply->readAll();

                      QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
                      QJsonObject jsobj = json_doc.object();
                      QJsonArray jsarr = json_doc.array();

                      QString iidee;
                      foreach (const QJsonValue &value, jsarr) {
                        QJsonObject jsob = value.toObject();

                        QString account = jsob["idaccounts"].toString();





               if (iidee == ui->lineEditID->text())
            {

                mwk->show();
            }

        reply->deleteLater();
}*/
}
