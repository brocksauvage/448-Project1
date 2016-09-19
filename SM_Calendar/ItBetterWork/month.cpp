#include "month.h"


month::month() {
    this->name = "";
    this->totalDays = 0;
    this->dayOfWeek = 0;
}

month::~month() {
}

void month::setMonth(QString monthName, int days, int weekDay){
    this->name = monthName;
    this->totalDays = days;
    this->dayOfWeek = weekDay;
    return;
}

int month::getDays(){
    return(this->totalDays);
}

int month::getDayOfWeek(){
    return(this->dayOfWeek);
}

QString month::getName(){
    return(this->name);
}
