#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    statistic(new MarkStatistic(this))
{
    ui->setupUi(this);
    connect(statistic, &MarkStatistic::stateChanged, this, &MainWindow::updateStatisticLabels);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_buttonMark5_clicked()
{
    statistic->addMark(5);
}

void MainWindow::on_buttonMark4_clicked()
{
    statistic->addMark(4);
}

void MainWindow::on_buttonMark3_clicked()
{
    statistic->addMark(3);
}

void MainWindow::on_buttonMark2_clicked()
{
    statistic->addMark(2);
}

void MainWindow::on_buttonReset_clicked()
{
    statistic->reset();
}

void MainWindow::updateStatisticLabels(int sum, int count, double average)
{
    ui->labelAverage->setText(QString::number(average, 'f', 1));
    ui->labelSum    ->setText(QString::number(sum));
    ui->labelCount  ->setText(QString::number(count));
}
