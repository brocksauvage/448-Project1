#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Dialog.h"
#include "ui_dialog.h"
#include "ui_dialogdel.h"
#include "dialogdel.h"
#include <QFile>
#include <QTextStream>
#include <QVector>
#include <QTextBrowser>
#include <QString>


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



/*void MainWindow::setEvents(){
    QFile file("C:\\Users\\Denae\\Documents\\CalendarRedo\\LastDate.txt");
            if (!file.open(QIODevice::ReadOnly | QIODevice::Text)){
                return;
            }
        QString lastDate;
        QTextStream in(&file);
        lastDate = in.readLine();

        QFile inFile("C:\\Users\\Denae\\Documents\\CalendarRedo\\EventList.txt");
        if (!inFile.open(QIODevice::ReadOnly | QIODevice::Text)){
            return;
        }
        QTextStream input(&inFile);
        QVector<QString> events;
        QString line;
        while (!input.atEnd()) {
            line = input.readLine();
            events.push_back(line);
        }

        for (int n = 0; n < events.size(); n = n + 4) {
            if (events[n] == lastDate) {
                ui->EventList->setText(events[n] + "\n" + events[n + 1] + "\n");
            }
        }
}
*/


void MainWindow::on_Add1_clicked()
{
    Dialog newEvent;
    newEvent.setModal(true);
    newEvent.exec();

    QFile file("C:\\Users\\Denae\\Documents\\CalendarRedo\\LastDate.txt");
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)){
            return;
        }
    QString lastDate;
    QTextStream in(&file);
    while (!in.atEnd()) {
        lastDate = in.readLine();
    }

    QFile inFile("C:\\Users\\Denae\\Documents\\CalendarRedo\\EventList.txt");
    if (!inFile.open(QIODevice::ReadOnly | QIODevice::Text)){
        return;
    }
    QTextStream input(&inFile);
    QVector<QString> events;
    QString line;
    while (!input.atEnd()) {
        line = input.readLine();
        events.push_back(line);
    }

    for (int n = 0; n < events.size(); n = n + 4) {
        if (events[n] == lastDate) {
            setEventList();
            //ui->EventList->append(events[n] + "\n" + events[n + 1] + "\n" + events[n + 2] + "\n");
        }
    }
}


void MainWindow::setEventList(){
    QFile inputFile("C:\\Users\\Denae\\Documents\\CalendarRedo\\EventList.txt");
    if (!inputFile.open(QIODevice::ReadOnly | QIODevice::Text)){
        return;
    }
    QTextStream input(&inputFile);
    QString str;
    str = input.readAll();
    ui->EventList->setText(str);
}


void MainWindow::on_delete_2_clicked()
{
    DialogDel d1;
    d1.setModal(true);
    d1.exec();
    setEventList();

}
