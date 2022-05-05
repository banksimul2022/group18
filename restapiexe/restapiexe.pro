QT       += core gui
QT       +=network
QT       += serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../pankkiautomaatti/pinui.cpp \
    bankmain.cpp \
    engine.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    ../pankkiautomaatti/pinui.h \
    bankmain.h \
    engine.h \
    mainwindow.h

FORMS += \
    ../pankkiautomaatti/pinui.ui \
    bankmain.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32: LIBS += -L$$PWD/../restapidll2/build/debug/ -lrestapidll2

INCLUDEPATH += $$PWD/../restapidll2
DEPENDPATH += $$PWD/../restapidll2

win32: LIBS += -L$$PWD/../rfid/build/debug/ -lrfid

INCLUDEPATH += $$PWD/../rfid
DEPENDPATH += $$PWD/../rfid

win32: LIBS += -L$$PWD/../rfidexe/build/debug/ -lrfidexe

INCLUDEPATH += $$PWD/../rfidexe
DEPENDPATH += $$PWD/../rfidexe
