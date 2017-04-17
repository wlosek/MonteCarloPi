#include "drawarea.h"
#include <QPen>
#include <QPainter>
#include <QPoint>

void DrawPoints(const PointsVector& points,
                Qt::GlobalColor color,
                QPainter& painter)
{
    painter.setPen(color);
    for(int i = 0; i < points.size(); ++i)
    {
        const std::pair<double, double> point = points.at(i);
        painter.drawPoint(point.first * 150 + 150, point.second * 150 + 150);
    }
}

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

    DrawPoints(m_Inside, Qt::green, painter);
    DrawPoints(m_Outside, Qt::red, painter);

    painter.end();
}
