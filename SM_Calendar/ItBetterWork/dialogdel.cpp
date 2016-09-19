#include "dialogdel.h"
#include "ui_dialogdel.h"
#include <QFile>
#include <QTextStream>
#include <QVector>
#include <QTextBrowser>
#include <QString>
#include "eventhandler.h"
#include "ui_eventhandler.h"
#include <QDebug>

DialogDel::DialogDel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogDel)
{
    ui->setupUi(this);
}

DialogDel::~DialogDel()
{
    delete ui;
}


//this is the dialog box where the user chooses which event they'd like to delete
//they choose some value 1 to how many events there are
//removes event from event list
void DialogDel::on_dConfirm_clicked()
{
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

    int eventNum = ui->spinBox->value();
    if(eventNum == 0){
        qDebug() << "Bad input";
        return;
    }

    while (!input.atEnd()) {
        line = input.readLine();
        events.push_back(line);
    }
    for (int n = 0; n < events.size(); n = n + 4) {
        if (events[n] == lastDate) {
            focusDay.push_back(events[n] + "\r\n" + events[n + 1] + "\r\n" + events[n + 2] + "\r\n\r\n");
        }
    }
    for (int j = 0; j < events.size(); j = j + 4) {
        condensed.push_back(events[j] + "\r\n" + events[j + 1] + "\r\n" + events[j + 2] + "\r\n\r\n");
    }

    for (int k = 0; k < condensed.size(); k++) {
        if(eventNum < 0 || eventNum > condensed.size()){
            this->close();
        }
        else if (condensed[k] == focusDay[eventNum - 1]) {
            condensed.erase(condensed.begin() + k);
        }
    }

    QFile OutputFile("C:\\SM_Calendar\\ItBetterWork\\EventList.txt");
    if(!OutputFile.open(QIODevice::WriteOnly | QFile::Text)){
        return;
    }
    QTextStream out(&OutputFile);
    for (int i = 0; i < condensed.size(); i++) {
        out << condensed[i];
    }
    this->close();

}

