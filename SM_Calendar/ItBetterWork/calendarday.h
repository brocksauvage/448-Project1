#ifndef CALENDARDAY_H
#define CALENDARDAY_H

#include <QWidget>
#include <QDialog>
#include <QObject>
#include <QFile>
#include <QTextStream>
#include <QVector>
#include <QTextBrowser>
#include <QString>
#include <QStringList>
#include <iostream>
#include "mainwindow.h"
#include "calendar.h"
#include "month.h"
#include <QLabel>

namespace Ui {
class calendarday;
}

class calendarday : public QDialog
{
    Q_OBJECT

public:
    explicit calendarday(QWidget *parent = 0);
    ~calendarday();

    /**
        * Pre: None
        * Post: Sets the events on a particular day. Uses file IO to write event details to the file
        * Return: Void
        */

    void setEvents();

    /**
        * Pre: None
        * Post: Sets the date for each label on each day of the month
        * Return: Void
        */

    void setDateLabel();

    /**
     * @brief These variables are used to create labels for events. Week labels holds the list of ID's for the labels, monthArray holds all of the
     * month objects, and current month is the current month that is being focused on.
     */
    QLabel* weekLabels[7];
    month* monthArray;
    month currentMonth;

    /**
     * @brief initArrays() initializes and populates the monthArray, and setWeekLabels sets the labels for week view
     */
    void initArrays();
    void setWeekLabels();

private slots:
    void on_pushButton_clicked();

private:
    Ui::calendarday *ui;
};

#endif // CALENDARDAY_H
