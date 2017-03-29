#ifndef NUMBEROFPOINTSWIDGET_H
#define NUMBEROFPOINTSWIDGET_H

#include <QWidget>

class QLineEdit;
class QPushButton;

class NumberOfPointsWidget : public QWidget
{
    Q_OBJECT

public:
    explicit NumberOfPointsWidget(QWidget *parent = 0);

    QPushButton*    GetPushButton() const;

private:
    QLineEdit*      m_NumberOfPoints;
    QPushButton*    m_RunApp;

    void            InitLayout();
};

#endif // NUMBEROFPOINTSWIDGET_H
