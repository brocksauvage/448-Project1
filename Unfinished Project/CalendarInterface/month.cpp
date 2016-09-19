#include "month.h"
//#include "event.h"

month::month() {
    this->name = "";
    this->totalDays = 0;
    this->dayOfWeek = 0;
    arr = nullptr;
}

month::~month() {
    delete[] arr;
}

void month::setMonth(std::string monthName, int days, int weekDay){
    this->name = monthName;
    this->totalDays = days;
    this->dayOfWeek = weekDay;
    arr = new day[days];
    return;
}

int month::getDays(){
    return(this->totalDays);
}

int month::getDayOfWeek(){
    return(this->dayOfWeek);
}

std::string month::getName(){
    return(this->name);
}
