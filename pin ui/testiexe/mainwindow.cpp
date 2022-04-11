#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    pointteri= new Pinui;
    connect(pointteri, SIGNAL(sendNumberToExe(QString)),
            this, SLOT(reseve(QString)));
}


void MainWindow::on_pushButton_2_clicked()
{
    delete pointteri;
    pointteri= nullptr;
}

void MainWindow::reseve(QString s)
{
    ui->lineEdit->setText(s);
}

