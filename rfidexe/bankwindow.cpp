#include "bankwindow.h"
#include "ui_bankwindow.h"

bankwindow::bankwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::bankwindow)
{
    ui->setupUi(this);

}

bankwindow::~bankwindow()
{
    delete ui;
}

void bankwindow::on_pushButton_clicked()
{
    this->hide();
    emit bankClosedSignal();
}

