#-------------------------------------------------
#
# Project created by QtCreator 2014-09-28T18:55:03
#
#-------------------------------------------------

QT       =
TARGET   = RARCLib
TEMPLATE = lib
VERSION  = 0.1
CONFIG  += staticlib

SOURCES += \
    $$PWD/src/RARCArchive.cpp \
    $$PWD/src/RARCArchiveReader.cpp

LIBS += -lAthena
DEFINES += ATHENA_NO_SAVES ATHENA_NO_ZQUEST ATHENA_NO_SAKURA
DEFINES += RARCLIB_STATIC
INCLUDEPATH += $$PWD/include
HEADERS += \
    $$PWD/include/RARCArchive.hpp \
    $$PWD/include/RARCLib.hpp \
    $$PWD/include/RARCArchiveReader.hpp

isEmpty(PREFIX) {
    PREFIX = /usr/local
}

unix {
    CONFIG += link_pkgconfig
    PKGCONFIG += libAthena
    target.path = $$PREFIX/lib
    headerFiles.files = $$HEADERS
    headerFiles.path = $$PREFIX/include/RARCLib
    INSTALLS += target headerFiles
}
