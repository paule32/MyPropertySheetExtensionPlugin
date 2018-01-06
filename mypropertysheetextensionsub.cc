#include "mypropertysheetextensionsub.h"

#include <QWidget>
#include <QVariant>

MyPropertySheetExtensionSub::MyPropertySheetExtensionSub(QWidget *parent)
    : MyPropertySheetExtension(parent)
{
}

#if 0
int MyPropertySheetExtensionSub::count() const {
    return QDesignerPropertySheetExtension::count();
}

int MyPropertySheetExtensionSub::indexOf(const QString &name) const {
    return QDesignerPropertySheetExtension::indexOf(name);
}

QString MyPropertySheetExtensionSub::propertyName(int index) const {
    return QDesignerPropertySheetExtension::propertyName(index);
}

QString MyPropertySheetExtensionSub::propertyGroup(int index) const {
    return QDesignerPropertySheetExtension::propertyGroup(index);
}

void MyPropertySheetExtensionSub::setPropertyGroup(int index, const QString& group) {
    MyPropertySheetExtension::setPropertyGroup(index, group);
}

bool MyPropertySheetExtensionSub::hasReset(int index) const {
    return QDesignerPropertySheetExtension::hasReset(index);
}

bool MyPropertySheetExtensionSub::reset(int index) {
    return QDesignerPropertySheetExtension::reset(index);
}

bool MyPropertySheetExtensionSub::isVisible(int index) const {
    return QDesignerPropertySheetExtension::isVisible(index);
}

void MyPropertySheetExtensionSub::setVisible(int index, bool b) {
    MyPropertySheetExtension::setVisible(int index, b);
}

bool MyPropertySheetExtensionSub::isAttribute(int index) const {
    return QDesignerPropertySheetExtension::isAttribute(index);
}

void MyPropertySheetExtensionSub::setProperty(int index, const QVariant& value) {
    QDesignerPropertySheetExtension::setProperty(index, value);
}

bool MyPropertySheetExtensionSub::isChanged(int index, bool changed) const {
    return QDesignerPropertySheetExtension::isChanged(index, changed);
}

void MyPropertySheetExtensionSub::setChanged(int index, bool changed) {
    QDesignerPropertySheetExtension::setChanged(index, changed);
}
#endif
