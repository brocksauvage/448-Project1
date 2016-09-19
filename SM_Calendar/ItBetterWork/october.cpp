#include "october.h"
#include "ui_october.h"
#include "lastviewed.h"
#include "ui_lastviewed.h"
#include <QFile>
#include <QTextStream>
#include <QVector>

October::October(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::October)
{
    ui->setupUi(this);
}

October::~October()
{
    delete ui;
}

void October::on_August1_clicked()
{
    QPushButton* button = qobject_cast<QPushButton*>(sender()); //this line from
    //http://stackoverflow.com/questions/4046839/how-to-get-sender-widget-with-a-signal-slot-mechanism
    QFile myFile("C:\\SM_Calendar\\ItBetterWork\\LastDate.txt");
    if(!myFile.open(QIODevice::WriteOnly | QIODevice::Truncate | QIODevice::Text)){
        return;
    }

    QTextStream outFile(&myFile);
    QString month = ui->label->text();
    QString day = button->text();

    outFile << month << " " << day;

    myFile.close();

    calendarday l;
    l.setModal(true);
    l.setDateLabel();
    l.exec();
}
