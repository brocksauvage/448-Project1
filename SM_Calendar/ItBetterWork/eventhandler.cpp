#include "eventhandler.h"
#include "ui_eventhandler.h"
#include "Dialog.h"
#include "ui_dialog.h"
#include "ui_dialogdel.h"
#include "dialogdel.h"
#include <QFile>
#include <QTextStream>
#include <QVector>
#include <QTextBrowser>
#include <QString>


eventhandler::eventhandler(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::eventhandler)
{
    ui->setupUi(this);
}

eventhandler::~eventhandler()
{
    delete ui;
}



void eventhandler::on_Add1_clicked()
{
    Dialog newEvent;
    newEvent.setModal(true);
    newEvent.exec();

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
            ui->EventList->append(events[n] + "\n" + events[n + 1] + "\n" + events[n + 2] + "\n");
       }
    }
    //ui->eventsOnClick->hide();

}


void eventhandler::setEventListDel(){
    QFile file("C:\\SM_Calendar\\ItBetterWork\\LastDate.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)){
        return;
    }
    QString lastDate;
    QTextStream in(&file);
    lastDate = in.readLine();


    QFile inputFile("C:\\SM_Calendar\\ItBetterWork\\EventList.txt");
    if (!inputFile.open(QIODevice::ReadOnly | QIODevice::Text)){
        return;
    }
    QTextStream input(&inputFile);

    QVector<QString> events; //holds all events line by line
    QVector<QString> focusDay; //holds only the events for the given focus day line by line
    QVector<QString> condensed; //takes the focus day vector and condenses the lines to blocks of events
    QString line;

    int eventNum = 0;
    while (!input.atEnd()) {
        line = input.readLine();
        events.push_back(line);
    }
    for (int n = 0; n < events.size(); n = n + 4) {
        if (events[n] == lastDate) {
            focusDay.push_back(events[n] + "\r\n" + events[n + 1] + "\r\n" + events[n + 2] + "\r\n");
        }
    }
    ui->EventList->clear();

    for(int i = 0; i < focusDay.size(); i++){
       ui->EventList->append(focusDay.at(i));
    }
}

void eventhandler::setEventOnClick(){
    //ui->eventsOnClick->setText("Hello");
    /*QFile file("/Users/brocksauvage/Desktop/EECS448_Project1/TeamCalendar/448-Project1/448-Project1/ItBetterWork/LastDate.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)){
        return;
    }
    QString lastDate;
    QTextStream in(&file);
    lastDate = in.readLine();


    QFile inputFile("/Users/brocksauvage/Desktop/EECS448_Project1/TeamCalendar/448-Project1/448-Project1/ItBetterWork/EventList.txt");
    if (!inputFile.open(QIODevice::ReadOnly | QIODevice::Text)){
        return;
    }
    QTextStream input(&inputFile);

    QVector<QString> events; //holds all events line by line
    QVector<QString> focusDay; //holds only the events for the given focus day line by line
    QVector<QString> condensed; //takes the focus day vector and condenses the lines to blocks of events
    QString line;

    int eventNum = 0;
    while (!input.atEnd()) {
        line = input.readLine();
        events.push_back(line);
    }
    for (int n = 0; n < events.size(); n = n + 4) {
        if (events[n] == lastDate) {
            focusDay.push_back(events[n] + "\r\n" + events[n + 1] + "\r\n" + events[n + 2] + "\r\n");
        }
    }
    ui->eventsOnClick->clear();

    for(int i = 0; i < focusDay.size(); i++){
       ui->eventsOnClick->append(focusDay.at(i));
    }*/
}




void eventhandler::on_delete_2_clicked()
{
    DialogDel d1;
    d1.setModal(true);
    d1.exec();
    setEventListDel();

}

void eventhandler::on_events_clicked()
{
    setEventListDel();
}
