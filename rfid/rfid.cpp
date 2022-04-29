#include "rfid.h"

void Rfid::huuhaa()
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

        /*QByteArray readData = pQSerialPort->readAll();
            while (pQSerialPort->waitForReadyRead(5000))
                readData.append(pQSerialPort->readAll());

            qDebug() << readData;*/


        //StringID = QString(ID);
        //qDebug() << "sama stringinä-> "<<StringID;
    //StringID = QString(ID);
    //qDebug() << "sama stringinä-> "<<StringID;
    //emit signaali(55);
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



