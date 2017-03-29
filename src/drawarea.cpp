#include "drawarea.h"
#include <QPen>
#include <QPainter>
#include <QPoint>

DrawArea::DrawArea(QWidget *parent)
    : QWidget(parent)
{
    setBackgroundRole(QPalette::Base);
    setAutoFillBackground(true);

    setFixedSize(300, 300);
}

void DrawArea::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event)

    QPoint center(150,150);

    QPen pen;
    pen.setWidth(2);
    pen.setColor(Qt::black);

    QPainter painter(this);
    painter.setPen(pen);
    painter.drawEllipse(center, 150,150);
    painter.end();
}
