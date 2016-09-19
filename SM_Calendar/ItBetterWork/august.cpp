#include "august.h"
#include "ui_august.h"
#include "lastviewed.h"
#include "ui_lastviewed.h"
#include "calendarday.h"
#include "ui_calendarday.h"
#include <QFile>
#include <QTextStream>
#include <QVector>

August::August(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::August)
{
    ui->setupUi(this);
}

August::~August()
{
    delete ui;
}

void August::on_August1_clicked()
{
    eventhandler e1;
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
    l.setWeekLabels();
    l.setModal(true);
    l.setDateLabel();
    l.exec();
    //e1.setEventOnClick();

}
