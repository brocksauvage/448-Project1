#include "calendarmonth.h"


CalendarMonth::CalendarMonth(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CalendarMonth)
{
    ui->setupUi(this);
    calendar myCal;
    yearArray = myCal.getMonths();
    currentMonth = yearArray[0];
    currentYear = " 2016";
    //ui->MonthName->setText(currentMonth.getName() + currentYear);
    initWeekArray();
    weekIndex=0;
    monthIndex=0;
}

CalendarMonth::~CalendarMonth()
{
    delete ui;
}

void CalendarMonth::initWeekArray()
{
    cornerLables[0] = ui->SundayCornerLabel;
    cornerLables[1] = ui->MondayCornerLabel;
    cornerLables[2] = ui->TuesdayCornerLabel;
    cornerLables[3] = ui->WednesdayCornerLabel;
    cornerLables[4] = ui->ThursdayCornerLabel;
    cornerLables[5] = ui->FridayCornerLabel;
    cornerLables[6] = ui->SaturdayCornerLabel;
}

void CalendarMonth::on_SunPush_clicked()
{
   // ui->FocusDay->setText(currentMonth.getName() + " " + ui->SundayCornerLabel->text());
}

void CalendarMonth::on_MonPush_clicked()
{
    //ui->FocusDay->setText(currentMonth.getName() + " " + ui->MondayCornerLabel->text());
}

void CalendarMonth::on_TuePush_clicked()
{
    //ui->FocusDay->setText(currentMonth.getName() + " " + ui->TuesdayCornerLabel->text());
}

void CalendarMonth::on_WedPush_clicked()
{
   // ui->FocusDay->setText(currentMonth.getName() + " " + ui->WednesdayCornerLabel->text());
}

void CalendarMonth::on_ThuPush_clicked()
{
   // ui->FocusDay->setText(currentMonth.getName() + " " + ui->ThursdayCornerLabel->text());
}

void CalendarMonth::on_FriPush_clicked()
{
   // ui->FocusDay->setText(currentMonth.getName() + " " + ui->FridayCornerLabel->text());
}

void CalendarMonth::on_SatPush_clicked()
{
   // ui->FocusDay->setText(currentMonth.getName() + " " + ui->SaturdayCornerLabel->text());
}

void CalendarMonth::on_NextButton_clicked()
{
    std::cout<<"Please work";
    setCornerLabels();
}

void CalendarMonth::setCornerLabels()
{
    std::cout<<"We're in";
    QString day = "";
    if(weekIndex==0)
    {
        for(int i = currentMonth.getDayOfWeek(); i < 7; i++)
        {
            day = QString::number(i);
            cornerLables[i]->setText(day);
        }
        weekIndex++;
    }
    else
    {
        for(int i = 0; i < 7; i++)
        {
            std::cout<<"In that forloop";
            day = QString::number(i+(7*weekIndex));
            if(i+(7*weekIndex) > currentMonth.getDays())
            {
                std::cout<<i+(7*weekIndex);
                day = QString::number(i+(7*weekIndex)-currentMonth.getDays());

                if(day == QString::number(currentMonth.getDays()))
                {
                    weekIndex = 0;
                    switchMonth();
                }
            }
            cornerLables[i]->setText(day);
        }
        weekIndex++;
    }

    if(weekIndex > 5)
    {
         weekIndex=0;
         switchMonth();
    }
}

void CalendarMonth::switchMonth()
{
    if(monthIndex < 10)
    {
        currentMonth = yearArray[(monthIndex+1)];
        //ui->MonthName->setText(currentMonth.getName());
        monthIndex++;
        std::cout<<monthIndex;
    }
    else
    {
        return;
    }
}

void CalendarMonth::on_DayViewButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void CalendarMonth::on_WeekViewButton_2_clicked()
{
   ui->stackedWidget->setCurrentIndex(2);
}

void CalendarMonth::on_DayViewButton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void CalendarMonth::on_WeekViewButton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void CalendarMonth::on_MonthViewButton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void CalendarMonth::on_YearViewButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void CalendarMonth::on_MonthViewButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void CalendarMonth::on_MonthViewButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void CalendarMonth::on_YearViewButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void CalendarMonth::on_YearViewButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void CalendarMonth::on_WeekViewButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void CalendarMonth::on_DayViewButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void CalendarMonth::on_August_2_clicked()
{
    ui->MonthStack->setCurrentIndex(0);
}
