#include "lastviewed.h"
#include "ui_lastviewed.h"
#include <QFile>
#include <QTextStream>
#include <QVector>
#include <QTextBrowser>
#include <QString>

lastViewed::lastViewed(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::lastViewed)
{
    ui->setupUi(this);
}

lastViewed::~lastViewed()
{
    delete ui;
}

void lastViewed::setEvents(){
    QFile file("C:\\SM_Calendar\\ItBetterWork\\LastDate.txt");
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)){
            return;
        }
    QString lastDate;
    QTextStream in(&file);
    while (!in.atEnd()) {
        lastDate = in.readLine();
    }

    QFile inFile("C:\\SM_Calendar\\ItBetterWork\\EventList.txt");
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
            //setEventList();
            ui->textBrowser->append(events[n] + "\n" + events[n + 1] + "\n" + events[n + 2] + "\n");
        }
    }
}

void lastViewed::setDateLabel(){
    QFile file("C:\\SM_Calendar\\ItBetterWork\\LastDate.txt");
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)){
            return;
        }
    QString lastDate;
    QTextStream in(&file);
    while (!in.atEnd()) {
        lastDate = in.readLine();
    }
    file.close();
    ui->LastView->setText(lastDate);

}

