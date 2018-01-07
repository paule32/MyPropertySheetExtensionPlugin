#ifndef POPUPMENU_H
#define POPUPMENU_H

#include <QTime>
#include <QWidget>
#include <QPaintEvent>

#include <QtUiPlugin/QDesignerExportWidget>

class QDESIGNER_WIDGET_EXPORT PopupMenu : public QWidget
{
    Q_OBJECT
    Q_PROPERTY(QColor color READ color WRITE setColor)

public:
    explicit PopupMenu(QWidget *parent = nullptr);

    QColor color() const { return color_; }
    
    void setColor(const QColor& color);
    void setColor(int r, int g, int b);
    
signals:
    
public slots:

private:
    QColor color_;
    
protected:
    void paintEvent(QPaintEvent *evt);
};

#endif
