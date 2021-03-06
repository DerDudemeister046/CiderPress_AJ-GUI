QT       += core gui xml network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11 console

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    core_communicator.cpp \
    download_widget.cpp \
    main.cpp \
    ciderpress_gui.cpp \
    md5_generator.cpp \
    request_manager.cpp \
    settings_reader.cpp \
    settings_widget.cpp \
    timestamp_generator.cpp \
    url_generator.cpp \
    xml_manager.cpp

HEADERS += \
    ciderpress_gui.h \
    core_communicator.h \
    download_widget.h \
    md5_generator.h \
    request_manager.h \
    settings_reader.h \
    settings_widget.h \
    timestamp_generator.h \
    url_generator.h \
    xml_manager.h

FORMS += \
    ciderpress_gui.ui \
    download_widget.ui \
    settings_widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
