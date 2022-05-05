/********************************************************************************
** Form generated from reading UI file 'bankwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANKWINDOW_H
#define UI_BANKWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bankwindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *lblCardNum;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *bankwindow)
    {
        if (bankwindow->objectName().isEmpty())
            bankwindow->setObjectName(QString::fromUtf8("bankwindow"));
        bankwindow->resize(800, 600);
        centralwidget = new QWidget(bankwindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 160, 111, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 30, 321, 121));
        label_2->setFrameShape(QFrame::Box);
        lblCardNum = new QLabel(centralwidget);
        lblCardNum->setObjectName(QString::fromUtf8("lblCardNum"));
        lblCardNum->setGeometry(QRect(140, 60, 91, 21));
        bankwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(bankwindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 17));
        bankwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(bankwindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        bankwindow->setStatusBar(statusbar);

        retranslateUi(bankwindow);

        QMetaObject::connectSlotsByName(bankwindow);
    } // setupUi

    void retranslateUi(QMainWindow *bankwindow)
    {
        bankwindow->setWindowTitle(QCoreApplication::translate("bankwindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("bankwindow", "kirjaudu ulos", nullptr));
        label_2->setText(QCoreApplication::translate("bankwindow", "Kortin tiedot", nullptr));
        lblCardNum->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class bankwindow: public Ui_bankwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANKWINDOW_H
