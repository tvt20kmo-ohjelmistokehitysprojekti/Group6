#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QString"
#include "mainwindowkirjauduttu.h"
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <qjsondocument.h>
#include "mysingleton.h"
#include "loginfailed.h"



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
    QString loginID = my->getIdaccounts();

    my->setPassword(ui->lineEditIDSalasana->text());
    QString loginPW = my->getPassword();



    MainWindowKirjauduttu *mwk=new MainWindowKirjauduttu();




       QNetworkRequest request(QUrl("http://www.students.oamk.fi/~t9alal00/Group6/index.php/accounts/"));
               request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

               QNetworkAccessManager nam;
                     QNetworkReply *reply = nam.get(request);
                     while (!reply->isFinished())
                     {
                         qApp->processEvents();
                     }
                     QByteArray response_data = reply->readAll();

                     qDebug()<<"DATA:"+response_data;

                     reply->deleteLater();

                     QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
                     QJsonObject jsobj = json_doc.object();
                     QJsonArray jsarr = json_doc.array();


                     foreach (const QJsonValue &value, jsarr) {
                       QJsonObject jsob = value.toObject();
                       QString account=jsob["idaccounts"].toString();
                       QString password=jsob["password"].toString();

                       loginfailed *lf = new loginfailed();

                       if (account == loginID && loginPW == password)
                       {
                            mwk->show();
                            this->hide();
                            delete lf;
                       }
                        /*else
                       {
                            loginfailed *lf = new loginfailed();
                            lf->show();
                       }*/




 }

}

