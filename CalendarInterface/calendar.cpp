#include "calendar.h"
#include "month.h"
//#include "event.h"
#include <iostream>

calendar::calendar(){
    arr = new month[10];
    arr[0].setMonth("august", 31, 1);
    arr[1].setMonth("september", 30, 4);
    arr[2].setMonth("october", 31, 6);
    arr[3].setMonth("november", 30, 2);
    arr[4].setMonth("december", 31, 4);
    arr[5].setMonth("january", 31, 0);
    arr[6].setMonth("february", 28, 3);
    arr[7].setMonth("march", 31, 3);
    arr[8].setMonth("april", 30, 6);
    arr[9].setMonth("may", 31, 1);

}

calendar::~calendar(){
    delete[] arr;
}

void calendar::print(){

    int dayCounter = 0;

    for(int i = 0; i < 10; i++){
        std::cout<<arr[i].getName()<<"\n";
        std::cout<<"SU MO TU WE TH FR SA\n";
        for(int j = 0; j < arr[i].getDayOfWeek(); j++){
            std::cout<<"   ";
            dayCounter++;
        }

        for(int j = 1; j <= arr[i].getDays(); j++){
            if(j<10){
                std::cout<<"0";
            }
            std::cout<<j<<" ";
            dayCounter++;
            if(dayCounter == 7){
                std::cout<<"\n";
                dayCounter = 0;
            }
        }

        dayCounter = 0;

        std::cout<<"\n"<<"\n"<<"\n";
    }

    return;
}
