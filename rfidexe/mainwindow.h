#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "rfid.h"
#include "pinui.h"
#include "bankwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void vastaanOta(short luku);
    void reseve(QString s);
    void receiveBankClosedSignal();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    Rfid * pointteriRfid;
    Pinui * pCheckPIN;
    bankwindow * pbankMain;
    QMap<short, QString> cards;
    short readedCard;

};
#endif // MAINWINDOW_H
