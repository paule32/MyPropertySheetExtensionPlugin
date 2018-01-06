CONFIG      += plugin debug_and_release
TARGET      = $$qtLibraryTarget(mypropertysheetextensionplugin)
TEMPLATE    = lib

HEADERS     = mypropertysheetextensionplugin.h
SOURCES     = mypropertysheetextensionplugin.cc
RESOURCES   = icons.qrc
LIBS        += -L. 

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += designer
} else {
    CONFIG += designer
}

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

include(mypropertysheetextension.pri)
include(mypropertysheetextensionsub.pri)
