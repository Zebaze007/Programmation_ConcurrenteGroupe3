QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Dish.cpp \
    butler.cpp \
    butlercontroller.cpp \
    chair.cpp \
    chaircontroller.cpp \
    client.cpp \
    clientcontroller.cpp \
    command.cpp \
    cookchief.cpp \
    cookchiefcontroller.cpp \
    cooker.cpp \
    cookercontroller.cpp \
    counter.cpp \
    countercontroller.cpp \
    dishcontroller.cpp \
    dishwasher.cpp \
    dishwashercontroller.cpp \
    main.cpp \
    mainwindow.cpp \
    managetools.cpp \
    materials.cpp \
    menu.cpp \
    rankchief.cpp \
    rankchiefcontroller.cpp \
    roomclerk.cpp \
    roomclerkcontroller.cpp \
    server.cpp \
    servercontroller.cpp \
    stove.cpp \
    stovecontroller.cpp \
    table.cpp \
    tablecontroller.cpp \
    washer.cpp \
    washingmachine.cpp \
    washingmachinecontroller.cpp

HEADERS += \
    butler.h \
    butlercontroller.h \
    chair.h \
    chaircontroller.h \
    cleaner.h \
    client.h \
    clientcontroller.h \
    command.h \
    cookchief.h \
    cookchiefcontroller.h \
    cooker.h \
    cookercontroller.h \
    counter.h \
    countercontroller.h \
    dish.h \
    dishcontroller.h \
    dishwasher.h \
    dishwashercontroller.h \
    mainwindow.h \
    managetools.h \
    materials.h \
    menu.h \
    rankchief.h \
    rankchiefcontroller.h \
    roomclerk.h \
    roomclerkcontroller.h \
    server.h \
    servercontroller.h \
    stove.h \
    stovecontroller.h \
    table.h \
    tablecontroller.h \
    washer.h \
    washingmachine.h \
    washingmachinecontroller.h

FORMS += \
    mainwindow.ui


RESOURCES += source_externe.qrc

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
