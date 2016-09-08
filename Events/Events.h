#ifndef Events_H
#define Events_H
#pragma once
#include <iostream>
#include <fstream>

class Events {
public:
	/**
	*  @pre None
	*  @post creats an event object
	*  @return None
	*/
	Events();

	void setDescription(std::string description);

	void setDate(int date);

	void setTime(std::string time);

	void setMonth(std::string month);

	void writeEvent(std::string datefile, std::string eventfile);

	void setID();

	int getID();

	void removeEvent(std::string file);

private:
	std::string m_description;
	int m_date;
	std::string m_time;
	std::string m_month;
	int m_id;
};
#endif

