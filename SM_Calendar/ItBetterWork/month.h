#ifndef MONTH_H
#define MONTH_H

#include <string>
#include <QString>
#include <QObject>

class month {
private:
    int totalDays; //Amount of days in a particular month
    int dayOfWeek; //This holds the day of the week the month starts on. 0-6 == Sun-Sat respectively
    QString name; //Name of month

public:
    month();
    ~month();

    /**
        *  @pre Requires existing month object
        *  @post Names the month, delcares how many days in that month, and declares the day of the week month starts on
        *  @return None
        */
    void setMonth(QString monthName, int days, int weekDay);

    /**
        *  @pre Requires existing month object
        *  @post None
        *  @return Amount of days in that month
        */
    int getDays();

    /**
        *  @pre Requires existing month object
        *  @post None
        *  @return Day of the week month starts on
        */
    int getDayOfWeek();

    /**
        *  @pre Requires existing month object
        *  @post None
        *  @return Name of the month
        */
    QString getName();

};



#endif
