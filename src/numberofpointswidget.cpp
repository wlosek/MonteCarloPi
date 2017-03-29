#include "numberofpointswidget.h"
#include <QHBoxLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QIcon>
#include <QString>

NumberOfPointsWidget::NumberOfPointsWidget(QWidget *parent)
    : QWidget(parent),
      m_NumberOfPoints(nullptr),
      m_RunApp(nullptr)
{
    InitLayout();
    ConnectActions();
}

void NumberOfPointsWidget::InitLayout()
{
    setMaximumHeight(40);

    QHBoxLayout* layout = new QHBoxLayout;
    m_NumberOfPoints = new QLineEdit;
    m_RunApp = new QPushButton;
    QIcon icon(":/PlayButton");
    m_RunApp->setIcon(icon);
    QLabel* numberOfPointsTxt = new QLabel("Number of points: ");

    layout->addWidget(numberOfPointsTxt);
    layout->addWidget(m_NumberOfPoints);
    layout->addWidget(m_RunApp);
    setLayout(layout);
}

void NumberOfPointsWidget::ConnectActions()
{
    connect(m_RunApp, SIGNAL(clicked()), this, SLOT(ClickedRun()));
}

void NumberOfPointsWidget::ClickedRun()
{
    QString numberOfPointsTxt = m_NumberOfPoints->text().isEmpty() ?
                                "0" : m_NumberOfPoints->text();
    emit Run(numberOfPointsTxt.toInt());
}
