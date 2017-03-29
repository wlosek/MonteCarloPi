#include "numberofpointswidget.h"
#include <QHBoxLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QIcon>

NumberOfPointsWidget::NumberOfPointsWidget(QWidget *parent)
    : QWidget(parent),
      m_NumberOfPoints(nullptr),
      m_RunApp(nullptr)
{
    InitLayout();
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

QPushButton* NumberOfPointsWidget::GetPushButton() const
{
    return m_RunApp;
}
