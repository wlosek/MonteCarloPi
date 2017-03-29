#ifndef MONTECARLOALGORITHM_H
#define MONTECARLOALGORITHM_H
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <QVector>

typedef QVector<std::pair<double, double> > PointsVector;

class MonteCarloAlgorithm
{
public:
    MonteCarloAlgorithm(int numberOfPoints = 0);

    double          GetPiResult() const;
    PointsVector    GetInsidePoints() const;
    PointsVector    GetOutsidePoints() const;

private:
    int             m_NumberOfPoints;
    double          m_PiResult;
    PointsVector    m_Inside;
    PointsVector    m_Outside;

    void            RunAlgorithm();
};

#endif // MONTECARLOALGORITHM_H
