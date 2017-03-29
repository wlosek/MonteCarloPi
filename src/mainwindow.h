#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <numberofpointswidget.h>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    NumberOfPointsWidget* m_NumberOfPointsWidget;

    void InitLayout();
};

#endif // MAINWINDOW_H
