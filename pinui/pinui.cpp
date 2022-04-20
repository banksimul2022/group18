#include "pinui.h"



Pinui::Pinui(QObject *parent): QObject(parent)
{
    Pengine= new engine;
    Pengine->show();
     qDebug()<<"dlln construktorissa";
     connect(Pengine, SIGNAL(sendNumber(QString)),
             this, SLOT(reseveNumber(QString)));
}

Pinui::~Pinui()
{
    qDebug()<<"dlln destructorissa...";

}


void Pinui::reseveNumber(QString s)
{
     qDebug()<<"lähetetään singnaali exelle";
     emit sendNumberToExe(s);
}
