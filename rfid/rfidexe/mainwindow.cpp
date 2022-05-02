#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pointteriRfid=new Rfid;
    connect (pointteriRfid,SIGNAL(signaali(short)),
             this,SLOT(vastaanOta(short)));
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pointteriRfid;
}

void MainWindow::vastaanOta(short luku)
{
    QString numero;

    ui->lineEdit->setText(numero.number(luku));
}


void MainWindow::on_pushButton_clicked()
{
    pointteriRfid->readCard();
}

