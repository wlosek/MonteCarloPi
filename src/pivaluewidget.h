#ifndef PIVALUEWIDGET_H
#define PIVALUEWIDGET_H

#include <QWidget>

class QLabel;

class PiValueWidget : public QWidget
{
    Q_OBJECT
public:
    explicit PiValueWidget(QWidget *parent = 0);

    void        SetPiValue(const double piValue);

private:
    QLabel*     m_PiValue;

    void        InitLayout();
};

#endif // PIVALUEWIDGET_H
