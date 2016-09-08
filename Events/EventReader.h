#ifndef EReader_H
#define EReader_H
#pragma once
#include <fstream>
#include <string>

class EventReader {
public:
	EventReader(std::string datefile, std::string eventfile);

	int getDate();
	
	std::string getMonth();

private:
	int m_date;
	std::string m_month;


};
#endif