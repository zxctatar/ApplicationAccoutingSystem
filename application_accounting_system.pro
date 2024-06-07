QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    admin_requestwidget.cpp \
    adminwindow.cpp \
    appointworkerwindow.cpp \
    client_requestwidget.cpp \
    clientwindow.cpp \
    createreportwindow.cpp \
    createrequestwindow.cpp \
    editingwindow.cpp \
    main.cpp \
    loginwindow.cpp \
    registrationwindow.cpp \
    reportwindow.cpp \
    requestdescriptionwindow.cpp \
    worker_requestwidget.cpp \
    workerwindow.cpp

HEADERS += \
    admin_requestwidget.h \
    adminwindow.h \
    applicationdata.h \
    appointworkerwindow.h \
    client_requestwidget.h \
    clientwindow.h \
    createreportwindow.h \
    createrequestwindow.h \
    editingwindow.h \
    loginwindow.h \
    registrationwindow.h \
    reportwindow.h \
    requestdescriptionwindow.h \
    worker_requestwidget.h \
    workerwindow.h

FORMS += \
    admin_requestwidget.ui \
    adminwindow.ui \
    appointworkerwindow.ui \
    client_requestwidget.ui \
    clientwindow.ui \
    createreportwindow.ui \
    createrequestwindow.ui \
    editingwindow.ui \
    loginwindow.ui \
    registrationwindow.ui \
    reportwindow.ui \
    requestdescriptionwindow.ui \
    worker_requestwidget.ui \
    workerwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
