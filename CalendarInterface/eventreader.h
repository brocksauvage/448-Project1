#ifndef EReader_H
#define EReader_H
#pragma once
#include <fstream>
#include <string>

class EventReader {
public:
    /**
    *  @pre eventreader object created
    *  @post reads in file and stores it in a vector line by line (i.e. line 1 goes in index 0, line 2 in index 1...)
    *  @return None
    */
    EventReader(std::string datefile, std::string eventfile);


};
#endif
