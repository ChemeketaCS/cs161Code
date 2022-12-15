TEMPLATE = app
CONFIG += cmdline
CONFIG += c++17
CONFIG -= debug_and_release
CONFIG -= app_bundle

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

QMAKE_CXXFLAGS += -Wmissing-include-dirs
QMAKE_CXXFLAGS += -Wredundant-decls
QMAKE_CXXFLAGS += -Winit-self
QMAKE_CXXFLAGS += -Wshadow
QMAKE_CXXFLAGS += -Wno-conversion

QMAKE_CXXFLAGS += -pedantic
QMAKE_CXXFLAGS += -pedantic-errors

HEADERS += \
    Image.h \
    ImageIOLib.h


SOURCES += main.cpp \
    ImageIOLib.cpp