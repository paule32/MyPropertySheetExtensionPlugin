#ifndef MYSHEET_H
#define MYSHEET_H

#include <QWidget>
#include <QtUiPlugin/QDesignerExportWidget>

class QDESIGNER_WIDGET_EXPORT MySheet : public QWidget
{
    Q_OBJECT
public:
    explicit MySheet(QWidget *parent = nullptr);
    
signals:
    
public slots:
};

#endif // MYSHEET_H
