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

    int             GetNumberOfPoints() const;

public slots:
    void            ClickedRun();
signals:
    void            Run(int numberOfPoints);

private:
    QLineEdit*      m_NumberOfPoints;
    QPushButton*    m_RunApp;

    void            InitLayout();
    void            ConnectActions();
};

#endif // NUMBEROFPOINTSWIDGET_H
