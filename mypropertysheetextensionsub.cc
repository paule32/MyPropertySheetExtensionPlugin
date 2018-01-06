#include "mypropertysheetextensionsub.h"

#include <QWidget>
#include <QVariant>

MyPropertySheetExtensionSub::MyPropertySheetExtensionSub(QWidget *parent)
    : MyPropertySheetExtension(parent)
{
    Q_UNUSED(parent)
}

int MyPropertySheetExtensionSub::count() const {
    return 0;
}

int MyPropertySheetExtensionSub::indexOf(const QString &name) const {
    Q_UNUSED(name)
    return 0;
}

QString MyPropertySheetExtensionSub::propertyName(int index) const {
    Q_UNUSED(index)
    return QString("");
}

QString MyPropertySheetExtensionSub::propertyGroup(int index) const {
    Q_UNUSED(index)
    return QString("");
}

void MyPropertySheetExtensionSub::setPropertyGroup(int index, const QString& group) {
    Q_UNUSED(index)
    Q_UNUSED(group)
}

bool MyPropertySheetExtensionSub::hasReset(int index) const {
    Q_UNUSED(index)
    return true;
}

bool MyPropertySheetExtensionSub::reset(int index) {
    Q_UNUSED(index)
    return true;
}

bool MyPropertySheetExtensionSub::isVisible(int index) const {
    Q_UNUSED(index)
    return true;
}

void MyPropertySheetExtensionSub::setVisible(int index, bool b) {
    Q_UNUSED(index)
    Q_UNUSED(b)
}

bool MyPropertySheetExtensionSub::isAttribute(int index) const {
    Q_UNUSED(index)
    return true;
}

void MyPropertySheetExtensionSub::setProperty(int index, const QVariant& value) {
    Q_UNUSED(index)
    Q_UNUSED(value)
}

bool MyPropertySheetExtensionSub::isChanged(int index) const {
    Q_UNUSED(index)
    return true;
}

void MyPropertySheetExtensionSub::setChanged(int index, bool changed) {
    Q_UNUSED(index)
    Q_UNUSED(changed)
}

