#include "rfid.h"

void Rfid::huuhaa()
{
    short signal=1;
    emit signaali(10);
}

void Rfid::openRfid()
{

}

Rfid::Rfid()
{
    qDebug("dll luotu");
    qDebug()<<"tämäkin toimii";
    pQSerialPort=new QSerialPort;
}

Rfid::~Rfid()
{
    delete pQSerialPort;
}



