#include "calendarday.h"
#include "ui_calendarday.h"


calendarday::calendarday(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::calendarday)
{
    ui->setupUi(this);
    calendar myCal;
    monthArray = myCal.getMonths();
}

calendarday::~calendarday()
{
    delete ui;
}

void calendarday::setEvents(){
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

void calendarday::setDateLabel(){
    QFile file("C:\\SM_Calendar\\ItBetterWork\\LastDate.txt");
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)){
            return;
        }
    QString lastDate;
    QTextStream in(&file);
    while (!in.atEnd()) {
        lastDate = in.readLine();
    }
    //std::cout << "lastDate";
    ui->Date->setText(lastDate);

}

void calendarday::setWeekLabels()
{
    QFile file("C:\\SM_Calendar\\ItBetterWork\\LastDate.txt");
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)){
            return;
        }

    QTextStream in(&file);
    QString content = file.readAll();
    QStringList list = content.split(" ");
    file.close();

    QString monthName = list.at(0);
    int targetDay = (list.at(1)).toInt();
    int cycleIndex = 0;
    int dayCount = 1;
    int targetIndex = 0;
    //currentMonth = monthArray[0];
    //QString testMonth = currentMonth.getName();
   // std::cout<<testMonth.toStdString();

    /*for(int i = 0; i<10; i++)
    {

        if(((monthArray[i].getName()).toLower()) == monthName.toLower())
        {
           // cycleIndex = monthArray[i].getDayOfWeek();
        }
    }*/
    /*while(cycleIndex < 7)
    {
        if(dayCount == targetDay)
        {
            targetIndex = cycleIndex;

        }
        else if(cycleIndex == 6)
        {
            cycleIndex = 0;
        }
    }
    int targetDayCopy = targetDay;
    for(int i = targetIndex; i < 7; i++)
    {
        weekLabels[i]->setText(QString::number(targetDayCopy));
        targetDayCopy++;
    }
    targetDayCopy = targetDay;
    for(int i = targetIndex; i >= 0; i--)
    {
        weekLabels[i]->setText(QString::number(targetDayCopy));
        targetDayCopy--;
    }*/
}

void calendarday::initArrays()
{


}

void calendarday::on_pushButton_clicked()
{

}
