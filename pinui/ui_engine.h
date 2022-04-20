/********************************************************************************
** Form generated from reading UI file 'engine.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENGINE_H
#define UI_ENGINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_engine
{
public:
    QPushButton *pushButton_10;
    QLineEdit *lineEdit;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;

    void setupUi(QDialog *engine)
    {
        if (engine->objectName().isEmpty())
            engine->setObjectName(QString::fromUtf8("engine"));
        engine->resize(400, 300);
        pushButton_10 = new QPushButton(engine);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(110, 160, 75, 24));
        lineEdit = new QLineEdit(engine);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(90, 30, 113, 22));
        layoutWidget = new QWidget(engine);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 70, 250, 86));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 1, 1, 1, 1);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout->addWidget(pushButton_6, 1, 2, 1, 1);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout->addWidget(pushButton_7, 2, 0, 1, 1);

        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout->addWidget(pushButton_8, 2, 1, 1, 1);

        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        gridLayout->addWidget(pushButton_9, 2, 2, 1, 1);

        layoutWidget1 = new QWidget(engine);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(70, 210, 166, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_11 = new QPushButton(layoutWidget1);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        horizontalLayout->addWidget(pushButton_11);

        pushButton_12 = new QPushButton(layoutWidget1);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        horizontalLayout->addWidget(pushButton_12);


        retranslateUi(engine);

        QMetaObject::connectSlotsByName(engine);
    } // setupUi

    void retranslateUi(QDialog *engine)
    {
        engine->setWindowTitle(QCoreApplication::translate("engine", "Dialog", nullptr));
        pushButton_10->setText(QCoreApplication::translate("engine", "0", nullptr));
        pushButton->setText(QCoreApplication::translate("engine", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("engine", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("engine", "3", nullptr));
        pushButton_4->setText(QCoreApplication::translate("engine", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("engine", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("engine", "6", nullptr));
        pushButton_7->setText(QCoreApplication::translate("engine", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("engine", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("engine", "9", nullptr));
        pushButton_11->setText(QCoreApplication::translate("engine", "cleari", nullptr));
        pushButton_12->setText(QCoreApplication::translate("engine", "enter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class engine: public Ui_engine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENGINE_H
