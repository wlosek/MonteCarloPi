#ifndef DRAWAREA_H
#define DRAWAREA_H

#include <QWidget>

class DrawArea : public QWidget
{
    Q_OBJECT
public:
    explicit DrawArea(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent *event) override;
};

#endif // DRAWAREA_H
