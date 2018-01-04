CONFIG      += plugin debug
TARGET      = PopupMenu
TEMPLATE    = lib

HEADERS     += popupmenuplugin.h  mypropertysheetextensionplugin.h
SOURCES     += popupmenuplugin.cc mypropertysheetextensionplugin.cc
RESOURCES   += icons.qrc 
LIBS        += -L. 

#PLUGIN_TYPE = designer
#PLUGIN_CLASS_NAME = PopupMenu

OTHER_FILES += PopupMenu.json

QT += widgets uiplugin

target.path = /home/jens/qtcreator/4.5.0/lib/qtcreator/plugins
INSTALLS    += target

include(popupmenu.pri)

DISTFILES += \
    popupmenu.pri \
    PopupMenu.json.in

FORMS += \
    form.ui

include(mypropertysheetextension.pri)
