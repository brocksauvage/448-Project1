#ifndef CALENDAR_H
#define CALENDAR_H

#include "month.h"

class calendar{
private:
    month* arr = nullptr;

public:

    /**
        *  @pre None
        *  @post creates an array of 10 months, names them and sets all the correct parameters for each month
        *  @return None
        */
    calendar();

    /**
        *  @pre Requires existing calendar object
        *  @post Deletes the array of months
        *  @return None
        */
    ~calendar();

    /**
        *  @pre Requires exisiting calendar object
        *  @post Prints the entire calendar to the console, this was used for debugging purposes early on
        *  @return None
        */
    void print();

    /**
        *  @pre Requires existing calendar object
        *  @post None
        *  @return returns array of months
        */
    month* getMonths();
};

#endif
