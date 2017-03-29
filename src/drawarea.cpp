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

void DrawArea::SetPoints(const PointsVector& inside,
                          const PointsVector& outside)
{
    m_Inside = inside;
    m_Outside = outside;
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

    pen.setWidth(1);

    for(int i = 0; i < m_Inside.size(); ++i)
    {
        const std::pair<double, double> point = m_Inside.at(i);
        pen.setColor(Qt::green);
        painter.setPen(pen);
        painter.drawPoint(point.first * 150 + 150, point.second * 150 + 150);
    }

    for(int i = 0; i < m_Outside.size(); ++i)
    {
        const std::pair<double, double> point = m_Outside.at(i);
        pen.setColor(Qt::red);
        painter.setPen(pen);
        painter.drawPoint(point.first * 150 + 150, point.second * 150 + 150);
    }

    painter.end();
}
