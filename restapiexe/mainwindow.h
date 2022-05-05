#ifndef MAINWINDOW_H
#define MAINWINDOW_H
enum states
{
    initialState,    // When user is setting clock and other parameters
    checkPin,       // When user is inside and can either configure or arm the system
    bankMainState          // When waiting for door to open
};

enum events
{
    cardNumberRead,           // Program started
    pinGiven,              // User enters configuration info from GUI
    userAccepted,            // User stores config and doneConfiguring signal is emitted.
    backToStart        // User stores configuration
};
#include "restapidll2.h"
#include <QMainWindow>
#include <QDebug>
#include <QTimer>
#include "pinui.h"
#include "bankmain.h"
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();



public slots:
    void loginSlot(QNetworkReply *reply);

private:
    Ui::MainWindow *ui;
    Restapidll2 * pRest;
    bankmain * pMain;
    QString num,pin;
    QNetworkAccessManager *loginManager;
    QNetworkReply *reply;
    QByteArray response_data;
};
#endif // MAINWINDOW_H
