#ifndef ENGINE_H
#define ENGINE_H
#include <QObject>
#include <QDebug>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

class Engine:public QObject
{
    Q_OBJECT
public:
    Engine(QObject * parent = nullptr);
    ~Engine();
    void login(QString, QString);
    void getCustomerAndLoginInfo(QString);
    void getCustomerName(short);
    void getAccountBalance(short);
    void getAccountActions(short);
    void getAccountActionsList(short,short);
    void withdrawalOrDeposit(short,QString);
private:
    QNetworkAccessManager *getManager;
    QNetworkReply *reply;
    QByteArray response_data;
public slots:
    void receiveLoginHTTPresult(QNetworkReply * reply);
    void receiveInfoHTTPresult(QNetworkReply * reply);
    void receiveNameHTTPresult(QNetworkReply * reply);
    void receiveBalanceHTTPresult(QNetworkReply * reply);
    void receiveActionsHTTPresult(QNetworkReply * reply);
    void receiveActionListHTTPresult(QNetworkReply * reply);
    void receiveWithdrawalInfoHTTPresult(QNetworkReply * reply);
signals:
    void sendLoginResultTointerface(bool);
    void sendInfoToInterface(int,int);
    void sendNametoInterface(QString,QString);
    void sendBalanceToInterface(QString);
    void sendActionsToInterface(QString,short);
    void sendActionListToInterface(QString,short);
    void sendWithdrawalInfoToInterface();
};

#endif // ENGINE_H
