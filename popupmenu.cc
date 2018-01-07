#include "popupmenu.h"

#include <QMouseEvent>
#include <QPainter>
#include <QTimer>
#include <QLabel>
#include <QPainter>
#include <QPaintEvent>

PopupMenu::PopupMenu(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle(tr("Popup Menu"));
    resize(80, 80);
    
    setColor(210,120,210);
    
    QLabel * labelA = new QLabel(this);
    labelA->setText("Hallo Ich");
    labelA->setVisible(true);
    labelA->move(10,10);
    labelA->resize(60,20);
}

void PopupMenu::setColor(int r, int g, int b)
{
    color_.setRed(r);
    color_.setGreen(g);
    color_.setBlue(b);
}

void PopupMenu::setColor(const QColor &col) {
    setColor(col.red(),col.green(),col.blue());
}

void PopupMenu::paintEvent(QPaintEvent *evt)
{
    QPainter painter(this);
    
    QRect rect(10,10,width()-22,height()-22);
    painter.drawRoundedRect(rect, 10,10);
}



