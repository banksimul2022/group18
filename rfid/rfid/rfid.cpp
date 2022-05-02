#include "rfid.h"

void Rfid::readCard()
{
    qDebug("Lue kortti");
    //connect(pQSerialPort, SIGNAL(readyRead()),this, SLOT(openRfid()));
    QString ID = pQSerialPort->readLine();
    qDebug() << ID;
    //emit signaali(20);
    if(!ID.isEmpty())
    {
        if(ID.contains("A"))
            signal = 1;
        if(ID.contains("B"))
            signal = 2;
        if(ID.contains("C"))
            signal = 3;

        emit signaali(signal);
        emit sendCardNumberToExe(ID);
    }
}

void Rfid::openRfid()
{
    pQSerialPort->waitForReadyRead(10000);

    qDebug() <<"Receiving data";
    QByteArray ID = pQSerialPort->readLine();
    qDebug() << "  Data -> " <<ID.data();

}

Rfid::Rfid()
{
    qDebug("dll luotu");
    qDebug()<<"tämäkin toimii";
    pQSerialPort=new QSerialPort;

    pQSerialPort->setPortName("COM3");
    pQSerialPort->open(QIODevice::ReadOnly);
}

Rfid::~Rfid()
{
    delete pQSerialPort;
}



