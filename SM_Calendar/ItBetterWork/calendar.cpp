#include "calendar.h"
#include "month.h"
//#include "event.h"
#include <iostream>

calendar::calendar(){
    arr = new month[10];
    arr[0].setMonth("AUGUST", 31, 1);
    arr[1].setMonth("SEPTEMBER", 30, 4);
    arr[2].setMonth("OCTOBER", 31, 6);
    arr[3].setMonth("NOVEMBER", 30, 2);
    arr[4].setMonth("DECEMBER", 31, 4);
    arr[5].setMonth("JANUARY", 31, 0);
    arr[6].setMonth("FEBRUARY", 28, 3);
    arr[7].setMonth("MARCH", 31, 3);
    arr[8].setMonth("APRIL", 30, 6);
    arr[9].setMonth("MAY", 31, 1);

}

calendar::~calendar(){

    delete[] arr;
}


month* calendar::getMonths()
{
    return arr;
}
