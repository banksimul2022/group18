#include "engine.h"
#include "rfid.h"
Engine::Engine(QObject * parent)
{

}

Engine::~Engine()
{

}
void Engine::login(QString ID, QString pin)
{
    QJsonObject jsonObj;
    jsonObj.insert("cardnumber",ID);
    jsonObj.insert("pin",pin);

    QString site_url="http://localhost:3000/login";
    QString credentials="newAdmin:newPass";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray data = credentials.toLocal8Bit().toBase64();
    QString headerData = "Basic" + data;
    request.setRawHeader("Authorization", headerData.toLocal8Bit() );

    getManager = new QNetworkAccessManager(this);

    connect(getManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(receiveLoginHTTPresult((QNetworkReply*))));

    reply = getManager->post(request,QJsonDocument(jsonObj).toJson());
}

void Engine::receiveLoginHTTPresult(QNetworkReply * reply)
{
    qDebug()<<"RESAPIDLL: Got HTTP/POST response!";
    response_data=reply->readAll();
    qDebug()<<"And response data = "<<response_data.data();
    QString resp = response_data.data();
    reply->deleteLater();
    getManager->deleteLater();
    if(!resp.compare("true"))
    {
        qDebug()<<"slotissa true haara";
        emit sendLoginResultTointerface(true);
    }
}

void Engine::receiveInfoHTTPresult(QNetworkReply *reply)
{

}

void Engine::receiveNameHTTPresult(QNetworkReply *reply)
{

}

void Engine::receiveBalanceHTTPresult(QNetworkReply *reply)
{

}

void Engine::receiveActionsHTTPresult(QNetworkReply *reply)
{

}

void Engine::receiveActionListHTTPresult(QNetworkReply *reply)
{

}

void Engine::receiveWithdrawalInfoHTTPresult(QNetworkReply *reply)
{

}

void Engine::getCustomerAndLoginInfo(QString)
{

}

void Engine::getCustomerName(short id)
{

}

void Engine::getAccountBalance(short)
{

}

void Engine::getAccountActions(short)
{

}

void Engine::getAccountActionsList(short, short)
{

}

void Engine::withdrawalOrDeposit(short, QString)
{

}
