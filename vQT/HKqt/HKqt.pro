QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    analyticgeo1lvl.cpp \
    analyticgeo2lvl.cpp \
    linalgebra1lvl.cpp \
    linalgebra2lvl.cpp \
    linalgebra3lvl.cpp \
    main.cpp \
    hedgehogkindom.cpp \
    mathanalysis1lvl.cpp \
    mathanalysis3lvl.cpp \
    mathanalysus2lvl.cpp \
    subject.cpp

HEADERS += \
    analyticgeo1lvl.h \
    analyticgeo2lvl.h \
    hedgehogkindom.h \
    linalgebra1lvl.h \
    linalgebra2lvl.h \
    linalgebra3lvl.h \
    mathanalysis1lvl.h \
    mathanalysis3lvl.h \
    mathanalysus2lvl.h \
    subject.h

FORMS += \
    analyticgeo1lvl.ui \
    analyticgeo2lvl.ui \
    hedgehogkindom.ui \
    linalgebra1lvl.ui \
    linalgebra2lvl.ui \
    linalgebra3lvl.ui \
    mathanalysis1lvl.ui \
    mathanalysis3lvl.ui \
    mathanalysus2lvl.ui \
    subject.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    image.qrc \
    math.qrc \
    style.qrc

DISTFILES +=
