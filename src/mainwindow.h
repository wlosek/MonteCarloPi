#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "numberofpointswidget.h"
#include "drawarea.h"
#include "pivaluewidget.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    NumberOfPointsWidget*   m_NumberOfPointsWidget;
    DrawArea*               m_DrawArea;
    PiValueWidget*          m_PiValueWdg;

    void                    InitLayout();
    void                    ConnectActions();

private slots:
    void                    CalculatePi(int numberOfPoints);
};

#endif // MAINWINDOW_H
