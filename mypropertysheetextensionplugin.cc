#include "mypropertysheetextension.h"
#include "mypropertysheetextensionplugin.h"

#include <QtPlugin>

MyPropertySheetExtensionPlugin::MyPropertySheetExtensionPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void MyPropertySheetExtensionPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;
    
    // Add extension registrations, etc. here
    
    m_initialized = true;
}

bool MyPropertySheetExtensionPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *MyPropertySheetExtensionPlugin::createWidget(QWidget *parent)
{
    return new MyPropertySheetExtension(parent);
}

QString MyPropertySheetExtensionPlugin::name() const
{
    return QLatin1String("MyPropertySheetExtension");
}

QString MyPropertySheetExtensionPlugin::group() const
{
    return QLatin1String("Designer [kallup]");
}

QIcon MyPropertySheetExtensionPlugin::icon() const
{
    return QIcon();
}

QString MyPropertySheetExtensionPlugin::toolTip() const
{
    return QLatin1String("");
}

QString MyPropertySheetExtensionPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool MyPropertySheetExtensionPlugin::isContainer() const
{
    return false;
}

QString MyPropertySheetExtensionPlugin::domXml() const
{
    return QLatin1String("<widget class=\"MyPropertySheetExtension\" name=\"myPropertySheetExtension\">\n</widget>\n");
}

QString MyPropertySheetExtensionPlugin::includeFile() const
{
    return QLatin1String("mypropertysheetextension.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(mypropertysheetextensionplugin, MyPropertySheetExtensionPlugin)
#endif // QT_VERSION < 0x050000
