#ifndef POPUPMENU_SUB_H
#define POPUPMENU_SUB_H

#include "mypropertysheetextension.h"

#include <QDesignerPropertySheetExtension>
#include <QWidget>
#include <QVariant>

class MyPropertySheetExtensionSub : public
      MyPropertySheetExtension
{
public:
    explicit MyPropertySheetExtensionSub(QWidget *parent);

protected:
    virtual QVariant property(int index) const;
    
    virtual int count() const;
    virtual int indexOf(const QString &name) const;
    
    virtual QString propertyName(int index) const;
    virtual QString propertyGroup(int index) const;
    
    virtual bool hasReset(int index) const;
    virtual bool reset(int index);
    
    virtual void setAttribute(int index, bool b);
    virtual void setPropertyGroup(int index, const QString &group);
    virtual void setProperty(int index, const QVariant &value);
    virtual void setVisible(int index, bool b);
    virtual void setChanged(int index, bool changed);
    
    virtual bool isVisible(int index) const;
    virtual bool isAttribute(int index) const;
    
    virtual bool isChanged(int index) const;
};

#endif
