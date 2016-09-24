#include "markstatistic.h"

MarkStatistic::MarkStatistic(QObject *parent) : QObject(parent)
{
}

void MarkStatistic::addMark(int mark)
{
    if (mark < 2 || mark > 5)
        return;

    sum += mark;
    ++count;

    emit stateChanged(sum, count);
}

void MarkStatistic::reset()
{
    sum   = 0;
    count = 0;

    emit stateChanged(sum, count);
}
