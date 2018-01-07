CONFIG      += plugin debug
TARGET      = PopupMenu
TEMPLATE    = lib

HEADERS     += popupmenuplugin.h
SOURCES     += popupmenuplugin.cc

RESOURCES   += icons.qrc 
LIBS        += -L. 

#PLUGIN_TYPE = designer
#PLUGIN_CLASS_NAME = PopupMenu

OTHER_FILES += PopupMenu.json

QT += widgets uiplugin

target.path = /home/jens/qtcreator/4.5.0/lib/qtcreator/plugins
INSTALLS    += target

DISTFILES += \
    PopupMenu.json.in

FORMS += \
    form.ui

include(popupmenu.pri)
