#ifndef MONTH_H
#define MONTH_H

//#include "event.h"
#include <string>

struct day { //http://www.cplusplus.com/doc/tutorial/structures/
    //event eventObj;
};

class month {
private:
    int totalDays;
    int dayOfWeek; //This holds the day of the week the month starts on. 0-6 == Sun-Sat respectively
    std::string name;
    day* arr;

public:
    month();
    ~month();
    void setMonth(std::string monthName, int days, int weekDay);
    int getDays();
    int getDayOfWeek();
    std::string getName();

};



#endif
