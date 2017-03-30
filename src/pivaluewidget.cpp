#include "pivaluewidget.h"
#include <QLabel>
#include <QHBoxLayout>
#include <QString>

PiValueWidget::PiValueWidget(QWidget *parent)
    : QWidget(parent),
      m_PiValue(nullptr)
{
    InitLayout();
}

void PiValueWidget::InitLayout()
{
    QHBoxLayout* layout = new QHBoxLayout;
    QLabel* piTxt = new QLabel("Pi value: ");
    m_PiValue = new QLabel("0");
    layout->addWidget(piTxt);
    layout->addWidget(m_PiValue);
    setLayout(layout);
}

void PiValueWidget::SetPiValue(const double piValue)
{
    QString piTxt = QString::number(piValue);
    m_PiValue->setText(piTxt);
}
