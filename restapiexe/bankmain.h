#ifndef BANKMAIN_H
#define BANKMAIN_H

#include <QDialog>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

namespace Ui {
class bankmain;
}

class bankmain : public QDialog
{
    Q_OBJECT

public:
    explicit bankmain(QWidget *parent = nullptr);
    ~bankmain();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::bankmain *ui;
};

#endif // BANKMAIN_H
