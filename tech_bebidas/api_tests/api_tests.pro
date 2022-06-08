QT       += core sql
QT       -= gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG -= app_bundle

INCLUDEPATH += $$PWD/../api/test/functional
DEPENDPATH += $$PWD/../api/test/functional

INCLUDEPATH += $$PWD/../api/test/unit
DEPENDPATH += $$PWD/../api/test/unit

LIBS += $$PWD/../lib/debug/api.dll
LIBS += $$PWD/../lib/release/api.dll

SOURCES += \
    ../api/test/functional/functional_tests.cpp \
    ../api/test/functional/main_functional_test.cpp \
    ../api/test/unit/unit_store.cpp \
    ../api/test/unit/main_unit_test.cpp \
    main.cpp

HEADERS += \
    ../api/test/functional/functional_tests.h \
    ../api/test/functional/main_functional_test.h \
    ../api/test/unit/unit_store.h \
    ../api/test/unit/main_unit_test.h \
    api_global.h

FORMS +=

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    peticos_tests.db
