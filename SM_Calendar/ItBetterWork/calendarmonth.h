#ifndef CALENDARMONTH_H
#define CALENDARMONTH_H
#include <QWidget>
#include "month.h"
#include "calendar.h"
#include "ui_calendarmonth.h"
#include "calendaryear.h"
#include <string>
#include <iostream>

namespace Ui {
class CalendarMonth;
}

class CalendarMonth : public QWidget
{
    Q_OBJECT

public:
    explicit CalendarMonth(QWidget *parent = 0);
    ~CalendarMonth();
    month* yearArray;
    month currentMonth;
    QString currentYear;
    void setCornerLabels();
    void initWeekArray();
    void switchMonth();
    QLabel* cornerLables[7];

private slots:

    void on_SunPush_clicked();

    void on_MonPush_clicked();

    void on_TuePush_clicked();

    void on_WedPush_clicked();

    void on_ThuPush_clicked();

    void on_FriPush_clicked();

    void on_SatPush_clicked();

    void on_NextButton_clicked();

    void on_DayViewButton_clicked();

    void on_WeekViewButton_2_clicked();

    void on_DayViewButton_10_clicked();

    void on_WeekViewButton_10_clicked();

    void on_MonthViewButton_10_clicked();

    void on_YearViewButton_clicked();

    void on_MonthViewButton_clicked();

    void on_MonthViewButton_2_clicked();

    void on_YearViewButton_2_clicked();

    void on_YearViewButton_3_clicked();

    void on_WeekViewButton_3_clicked();

    void on_DayViewButton_3_clicked();

    void on_August_2_clicked();

private:
    Ui::CalendarMonth *ui;
    int weekIndex;
    int monthIndex;
};

#endif // CALENDARMONTH_H
