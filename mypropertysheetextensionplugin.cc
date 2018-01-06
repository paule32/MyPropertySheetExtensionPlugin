#include "mysheet.h"
#include "mypropertysheetextension.h"
#include "mypropertysheetextensionplugin.h"
#include "mypropertysheetextensionsub.h"

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
    return new MyPropertySheetExtensionSub(parent);
}

QString MyPropertySheetExtensionPlugin::name() const
{
    return QLatin1String("MyPropertySheet");
}

QString MyPropertySheetExtensionPlugin::group() const
{
    return QLatin1String("Display Widgets [kallup]");
}

QIcon MyPropertySheetExtensionPlugin::icon() const
{
    return QIcon();
}

QString MyPropertySheetExtensionPlugin::toolTip() const
{
    return QLatin1String();
}

QString MyPropertySheetExtensionPlugin::whatsThis() const
{
    return QLatin1String();
}

bool MyPropertySheetExtensionPlugin::isContainer() const
{
    return false;
}

QString MyPropertySheetExtensionPlugin::domXml() const
{
    return QLatin1String(
    "<ui language=\"c++\">" \
    "<widget class=\"MyPropertySheet\" name=\"myPropertySheet\">\n</widget>\n" \
    "</ui>\n"
    );
}

QString MyPropertySheetExtensionPlugin::includeFile() const
{
    return QLatin1String("mypropertysheet.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(mypropertysheetextensionplugin, MyPropertySheetExtensionPlugin)
#endif // QT_VERSION < 0x050000
