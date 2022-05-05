#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    cards[1] = "1111";
    cards[2] = "2222";
    cards[3] = "3333";

    ui->setupUi(this);
    pointteriRfid=new Rfid;
    connect (pointteriRfid,SIGNAL(signaali(short)),
             this,SLOT(vastaanOta(short)));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pointteriRfid;
    delete pCheckPIN;
    delete pbankMain;
}

void MainWindow::vastaanOta(short luku)
{
    QString numero;
    ui->lineEdit->setText(numero.number(luku));

    // Tähän Rest kutsu korttinumerolla

    if(cards.contains(luku))
    {
        readedCard = luku;
        ui->infoLabel->setText("");
        pCheckPIN = new Pinui;
        connect(pCheckPIN, SIGNAL(sendNumberToExe(QString)),
                this, SLOT(reseve(QString)));
    }
    else
    {
        readedCard = -1;
        ui->infoLabel->setText("Korttia ei löytynyt");
    }
}

void MainWindow::reseve(QString s)
{
    QString oikeaPIN = cards[readedCard];

    if(oikeaPIN.compare(s) != 0)
    {
        qDebug() << "Väärä pin";
        ui->infoLabel->setText("Virheellinen PIN");
    }
    else
    {
        ui->infoLabel->setText("");
        qDebug() << "Oikea PIN";

        //uuden ikkunan aukaisu
        this->hide();
        pbankMain = new bankwindow(this);
        pbankMain->show();
        //ui->infoLabel->setText("Oikea PIN");
    }

    //ui->lineEdit->setText(s);
}


void MainWindow::on_pushButton_clicked()
{
    pointteriRfid->readCard();
}

