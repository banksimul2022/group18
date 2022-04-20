#include "engine.h"
#include "ui_engine.h"

engine::engine(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::engine)
{
    ui->setupUi(this);
     qDebug()<<"enginen construktorissa";
     index=0;
}

engine::~engine()
{
    delete ui;
    qDebug()<<"enginen destructorissa";
}

void engine::on_pushButton_12_clicked()
{
    if (index<4){
        return;
    }

    QString pin = "";

    for (int i=0; i<index; i++)
    {
        pin += QString::number(numbers[i]);
    }

   emit sendNumber(pin);

}


void engine::on_pushButton_clicked()
{
    if (index>3){
        return;
    }
    ui->lineEdit->setText(ui->lineEdit->text()+"*");
    numbers[index]=1;
    index++;
    for (int i=0; i<4; i++)
    {
        qDebug()<<numbers[i];
    }
}


void engine::on_pushButton_2_clicked()
{
    if (index>3){
        return;
    }
    ui->lineEdit->setText(ui->lineEdit->text()+"*");
    numbers[index]=2;
    index++;
    for (int i=0; i<4; i++)
    {
        qDebug()<<numbers[i];
    }
}


void engine::on_pushButton_3_clicked()
{
    if (index>3){
        return;
    }
    ui->lineEdit->setText(ui->lineEdit->text()+"*");
    numbers[index]=3;
    index++;
    for (int i=0; i<4; i++)
    {
        qDebug()<<numbers[i];
    }
}


void engine::on_pushButton_4_clicked()
{
    if (index>3){
        return;
    }
    ui->lineEdit->setText(ui->lineEdit->text()+"*");
    numbers[index]=4;
    index++;
    for (int i=0; i<4; i++)
    {
        qDebug()<<numbers[i];
    }
}


void engine::on_pushButton_5_clicked()
{
    if (index>3){
        return;
    }
    ui->lineEdit->setText(ui->lineEdit->text()+"*");
    numbers[index]=5;
    index++;
    for (int i=0; i<4; i++)
    {
        qDebug()<<numbers[i];
    }
}


void engine::on_pushButton_6_clicked()
{
    if (index>3){
        return;
    }
    ui->lineEdit->setText(ui->lineEdit->text()+"*");
    numbers[index]=6;
    index++;
    for (int i=0; i<4; i++)
    {
        qDebug()<<numbers[i];
    }
}


void engine::on_pushButton_7_clicked()
{
    if (index>3){
        return;
    }
    ui->lineEdit->setText(ui->lineEdit->text()+"*");
    numbers[index]=7;
    index++;
    for (int i=0; i<4; i++)
    {
        qDebug()<<numbers[i];
    }
}


void engine::on_pushButton_8_clicked()
{
    if (index>3){
        return;
    }
    ui->lineEdit->setText(ui->lineEdit->text()+"*");
    numbers[index]=8;
    index++;
    for (int i=0; i<4; i++)
    {
        qDebug()<<numbers[i];
    }
}


void engine::on_pushButton_9_clicked()
{
    if (index>3){
        return;
    }
    ui->lineEdit->setText(ui->lineEdit->text()+"*");
    numbers[index]=9;
    index++;
    for (int i=0; i<4; i++)
    {
        qDebug()<<numbers[i];
    }
}


void engine::on_pushButton_10_clicked()
{
    if (index>3){
        return;
    }
    ui->lineEdit->setText(ui->lineEdit->text()+"*");
    numbers[index]=0;
    index++;
    for (int i=0; i<4; i++)
    {
        qDebug()<<numbers[i];
    }
}


void engine::on_pushButton_11_clicked()
{
    index=0;
    ui->lineEdit->setText("");
}

