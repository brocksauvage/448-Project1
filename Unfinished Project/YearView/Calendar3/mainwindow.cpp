#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_August_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_September_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_October_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_November_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_December_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_January_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

void MainWindow::on_February_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_March_clicked()
{
    ui->stackedWidget->setCurrentIndex(8);
}

void MainWindow::on_April_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
}

void MainWindow::on_May_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}

void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
