#ifndef MYPROPERTYSHEETEXTENSION_H
#define MYPROPERTYSHEETEXTENSION_H

#include <QtDesigner/QDesignerPropertySheetExtension>
#include <QWidget>

class MyPropertySheetExtension
    : public QWidget
    , public QDesignerPropertySheetExtension
{
    Q_OBJECT
    
public:
    MyPropertySheetExtension(QWidget *parent = 0);
};

#endif
