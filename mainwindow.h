#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "markstatistic.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void on_buttonMark5_clicked();
    void on_buttonMark4_clicked();
    void on_buttonMark3_clicked();
    void on_buttonMark2_clicked();
    void on_buttonReset_clicked();
    void updateStatistic(int sum, int count);

private:
    Ui::MainWindow *ui;
    MarkStatistic *statistic;
};

#endif // MAINWINDOW_H
