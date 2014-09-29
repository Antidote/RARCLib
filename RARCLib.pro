#-------------------------------------------------
#
# Project created by QtCreator 2014-09-28T18:55:03
#
#-------------------------------------------------

QT       -= core gui

TARGET = RARCLib
TEMPLATE = lib
VERSION = 0.1
#CONFIG += staticlib

SOURCES += \
    $$PWD/src/RARCArchive.cpp \
    $$PWD/src/RARCArchiveReader.cpp

include (Athena/Athena.pri)

DEFINES += ATHENA_NO_SAVES ATHENA_NO_ZQUEST ATHENA_NO_SAKURA
#DEFINES += RARCLIB_STATIC
INCLUDEPATH += $$PWD/include
HEADERS += \
    $$PWD/include/RARCArchive.hpp \
    $$PWD/include/RARCLib.hpp \
    $$PWD/include/RARCArchiveReader.hpp

unix {
    target.path = /usr/lib
    INSTALLS += target
}
