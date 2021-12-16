CONFIG   += console 
CONFIG	 -= debug_and_release
CONFIG   -= app_bundle

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = app
SOURCES += main.cpp \
    ImageIOLib.cpp


QMAKE_CXXFLAGS += -std=c++11
QMAKE_LFLAGS += -std=c++11

QMAKE_CXXFLAGS += -Wmissing-include-dirs
QMAKE_CXXFLAGS += -Wredundant-decls
QMAKE_CXXFLAGS += -Winit-self
QMAKE_CXXFLAGS += -Wshadow
QMAKE_CXXFLAGS += -Wno-conversion

# QMAKE_CXXFLAGS += -Werror
# QMAKE_CXXFLAGS += -Wno-error=unused-variable

QMAKE_CXXFLAGS += -pedantic
QMAKE_CXXFLAGS += -pedantic-errors

HEADERS += \
    Image.h \
    ImageIOLib.h


