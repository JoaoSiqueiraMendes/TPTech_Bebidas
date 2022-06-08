QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += $$PWD/../api/includes
DEPENDPATH += $$PWD/../api/includes

LIBS += $$PWD/../bin/debug/api.dll
LIBS += $$PWD/../bin/release/api.dll

SOURCES += \
    entity/kitedit.cpp \
    entity/kitmanagement.cpp \
    entity/kitregister.cpp \
    main.cpp

HEADERS += \
    api_global.h \
    entity/kitedit.h \
    entity/kitmanagement.h \
    entity/kitregister.h

FORMS += \
    view/kitedit.ui \
    view/kitmanagement.ui \
    view/kitregister.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    peticos.db
