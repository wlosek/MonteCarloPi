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
    m_DrawArea = new DrawArea;

    QVBoxLayout* layout = new QVBoxLayout;
    layout->addWidget(m_NumberOfPointsWidget);
    layout->addWidget(m_DrawArea);

    centralWdg->setLayout(layout);
    setCentralWidget(centralWdg);
}
