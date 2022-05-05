#ifndef BANKWINDOW_H
#define BANKWINDOW_H

#include <QMainWindow>

namespace Ui {
class bankwindow;
}

class bankwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit bankwindow(QWidget *parent = nullptr);
    ~bankwindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::bankwindow *ui;
};

#endif // BANKWINDOW_H
