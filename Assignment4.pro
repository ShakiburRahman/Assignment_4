TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    selectionsort.cpp \
    insertionsort.cpp \
    mergesort.cpp \
    bubblesort.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    bubblesort.h \
    selectionsort.h \
    insertionsort.h \
    mergesort.h

