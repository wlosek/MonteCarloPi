#include "montecarloalgorithm.h"

MonteCarloAlgorithm::MonteCarloAlgorithm(int numberOfPoints)
    : m_NumberOfPoints(numberOfPoints),
      m_PiResult(0)
{
    srand(time(NULL));
    RunAlgorithm();
}

void MonteCarloAlgorithm::RunAlgorithm()
{
    double x, y;

    for(int i = 0; i < m_NumberOfPoints; ++ i)
    {
        x = ((double)rand() / (RAND_MAX)) * 2 - 1;
        y = ((double)rand() / (RAND_MAX)) * 2 - 1;

        if(x*x + y*y <= 1)
            m_Inside.append(std::make_pair(x, y));
        else
            m_Outside.append(std::make_pair(x, y));
    }

    m_PiResult = 4.0 * static_cast<double>(m_Inside.size()) /
                 static_cast<double>(m_NumberOfPoints);
}

double MonteCarloAlgorithm::GetPiResult() const
{
    return m_PiResult;
}

PointsVector MonteCarloAlgorithm::GetInsidePoints() const
{
    return m_Inside;
}

PointsVector MonteCarloAlgorithm::GetOutsidePoints() const
{
    return m_Outside;
}
