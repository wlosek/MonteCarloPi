#ifndef DRAWAREA_H
#define DRAWAREA_H

#include <QWidget>

typedef QVector<std::pair<double, double> > PointsVector;

class DrawArea : public QWidget
{
    Q_OBJECT
public:
    explicit DrawArea(QWidget *parent = 0);
    void            SetPoints(const PointsVector& inside,
                              const PointsVector& outside);

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    PointsVector    m_Inside;
    PointsVector    m_Outside;
};

#endif // DRAWAREA_H
