#ifndef ENGINE_H
#define ENGINE_H

#include <QDialog>
#include <QDebug>

namespace Ui {
class engine;
}

class engine : public QDialog
{
    Q_OBJECT

public:
    explicit engine(QWidget *parent = nullptr);
    ~engine();

private slots:
    void on_pushButton_12_clicked();

    void on_pushButton_clicked();



    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

signals:
    void sendNumber(QString);
private:
    Ui::engine *ui;
    short numbers[4];
    short index=0;
};

#endif // ENGINE_H
