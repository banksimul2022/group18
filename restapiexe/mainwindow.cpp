#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "engine.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ppinUI = new pinUI(this);
    connect(ppinUI,SIGNAL(pinGivenSignal()),
            this,SLOT(receivePinGivenSignal()));

    pbankMain = new bankMain(this);
    connect(pbankMain,SIGNAL(bankClosedSignal()),
            this,SLOT(receiveBankClosedSignal()));
}

MainWindow::~MainWindow()
{
    delete ui;
    ui=nullptr;
}

void MainWindow::runStateMachine(states s, events e)
{
    switch (s) {

        case initialState:
            initialStateHandler(e);
        break;

        case checkPin:
            checkPinHandler(e);
        break;

        case bankMainState:
            bankMainHandler(e);
        break;


        default:
            qDebug()<<"State = "<<State<<" and event = "<< e;

    }


}

void MainWindow::on_pushButton_clicked()
{
    pRest=new Restapidll2;
}


void MainWindow::on_pushButton_2_clicked()
{
    delete pRest;
}


void MainWindow::on_pushButton_4_clicked()
{
    pMain=new bankmain;
    pMain->show();
}


void MainWindow::on_pushButton_3_clicked()
{
    num = ui->lineEdit->text();
    qDebug()<<"Tilinumero="+num;
    pin = ui->lineEdit_2->text();
    qDebug()<<"Pin-koodi="+pin;

    QJsonObject jsonObj;
    jsonObj.insert("customerID",num);
    jsonObj.insert("card_PIN",pin);

    QString site_url="http://localhost:3000/login";
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic" + data;
    request.setRawHeader("Authorization", headerData.toLocal8Bit() );

    loginManager = new QNetworkAccessManager(this);

    connect(loginManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(loginSlot(QNetworkReply*)));

    reply = loginManager->post(request,QJsonDocument(jsonObj).toJson());
}

void MainWindow::loginSlot(QNetworkReply * reply)
{
    qDebug()<<"RESAPIDLL: Got HTTP/POST response!";
    response_data=reply->readAll();
    qDebug()<<"And response data = "<<response_data.data();
    QString resp = response_data.data();
    reply->deleteLater();
    loginManager->deleteLater();
    if(!resp.compare("true"))
    {
        qDebug()<<"slotissa true haara";
        //emit MainWindow::on_pushButton_4_clicked();
        on_pushButton_4_clicked();

    }
}


