#ifndef PINUI_H
#define PINUI_H


#include "pinui_global.h"
#include "engine.h"
#include <QDebug>
#include <QObject>

class PINUI_EXPORT Pinui: public QObject
{
    Q_OBJECT

public:
    Pinui(QObject * parent= nullptr);
    ~Pinui();
signals:
    void sendNumberToExe(QString);
public slots:
    void reseveNumber(QString);
private:
    engine * Pengine;
};

#endif // PINUI_H
