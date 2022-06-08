QT += core sql
QT -= gui

TEMPLATE = lib
DEFINES += LIB_LIBRARY

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    lib/storeImpl.cpp \
    lib/kitImpl.cpp \
    test/functional/functional_tests.cpp \
    test/functional/main_functional_test.cpp \
    test/unit/main_unit_test.cpp \
    #test/unit/unit_kit.cpp \
    test/unit/unit_store.cpp

HEADERS += \
    api_global.h \
    includes/handleBody.h \
    includes/kit.h \
    includes/kitImpl.h \
    includes/store.h \
    includes/storeImpl.h \
    test/functional/functional_tests.h \
    test/functional/main_functional_test.h \
    test/unit/main_unit_test.h \
    #test/unit/unit_kit.h \
    test/unit/unit_store.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target
