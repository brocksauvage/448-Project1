#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QObject>
#include <QGridLayout>
#include "calendar.h"
#include "calendarday.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_August_clicked();


    void on_September_clicked();

    void on_October_clicked();

    void on_November_clicked();

    void on_December_clicked();

    void on_January_clicked();

    void on_February_clicked();

    void on_March_clicked();

    void on_April_clicked();

    void on_May_clicked();

    void on_pushButton_clicked();


private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
