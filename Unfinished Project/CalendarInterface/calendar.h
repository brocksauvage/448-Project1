#ifndef CALENDAR_H
#define CALENDAR_H

#include "month.h"
//#include "event.h"

class calendar{
private:
    month* arr = nullptr;

public:
    calendar();
    ~calendar();
    void print();
};

#endif
