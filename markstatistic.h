#ifndef MARKSTATISTIC_H
#define MARKSTATISTIC_H

#include <QObject>

class MarkStatistic : public QObject
{
    Q_OBJECT
public:
    explicit MarkStatistic(QObject *parent = 0);
    void addMark(int mark);
    void reset();

signals:
    void stateChanged(int, int, double);

private:

    int sum{};
    int count{};
};

#endif // MARKSTATISTIC_H
