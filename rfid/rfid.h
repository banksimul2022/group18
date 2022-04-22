#ifndef RFID_H
#define RFID_H

#include "rfid_global.h"
#include <QDebug>
#include <QObject>
#include <QSerialPort>

class RFID_EXPORT Rfid: public QObject
{
    Q_OBJECT
public:
    void huuhaa();
    void openRfid();
    Rfid();
    ~Rfid();

private:
    QSerialPort * pQSerialPort;
signals:
    void signaali(short);
    void sendCardNumberToExe(QString);
};

#endif // RFID_H
