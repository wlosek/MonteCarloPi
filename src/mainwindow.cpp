#include "mainwindow.h"
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    m_NumberOfPointsWidget(nullptr)
{
    InitLayout();
}

MainWindow::~MainWindow()
{
}

void MainWindow::InitLayout()
{
    QWidget* centralWdg = new QWidget;
    m_NumberOfPointsWidget = new NumberOfPointsWidget;
    QVBoxLayout* layout = new QVBoxLayout;
    layout->addWidget(m_NumberOfPointsWidget);
    centralWdg->setLayout(layout);
    setCentralWidget(centralWdg);
}
