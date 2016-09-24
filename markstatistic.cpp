#include "markstatistic.h"

namespace
{
    inline double calcAverage(double sum, int count)
    {
        return count > 0 ? sum / count : 0;
    }
}

MarkStatistic::MarkStatistic(QObject *parent) : QObject(parent)
{
}

void MarkStatistic::addMark(int mark)
{
    if (mark < 2 || mark > 5)
        return;

    sum += mark;
    ++count;

    emit stateChanged(sum, count, calcAverage(sum, count));
}

void MarkStatistic::reset()
{
    sum   = 0;
    count = 0;

    emit stateChanged(sum, count, calcAverage(sum, count));
}
