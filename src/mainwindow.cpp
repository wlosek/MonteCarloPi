#include "mainwindow.h"
#include <QVBoxLayout>
#include "montecarloalgorithm.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    m_NumberOfPointsWidget(nullptr),
    m_DrawArea(nullptr),
    m_PiValueWdg(nullptr)
{
    InitLayout();
    ConnectActions();
}

MainWindow::~MainWindow()
{
}

void MainWindow::InitLayout()
{
    QWidget* centralWdg = new QWidget;

    m_NumberOfPointsWidget = new NumberOfPointsWidget;
    m_DrawArea = new DrawArea;
    m_PiValueWdg = new PiValueWidget;

    QVBoxLayout* layout = new QVBoxLayout;
    layout->addWidget(m_NumberOfPointsWidget);
    layout->addWidget(m_PiValueWdg);
    layout->addWidget(m_DrawArea);

    centralWdg->setLayout(layout);
    setCentralWidget(centralWdg);
}

void MainWindow::ConnectActions()
{
    connect(m_NumberOfPointsWidget, SIGNAL(Run(int)), this, SLOT(CalculatePi(int)));
}

void MainWindow::CalculatePi(int numberOfPoints)
{
    MonteCarloAlgorithm monteCarlo(numberOfPoints);
    m_PiValueWdg->SetPiValue(monteCarlo.GetPiResult());
    m_DrawArea->SetPoints(monteCarlo.GetInsidePoints(), monteCarlo.GetOutsidePoints());
    m_DrawArea->update();
}
