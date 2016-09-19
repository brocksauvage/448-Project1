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

	/**
	*  @pre event object created
	*  @post sets description of event
	*  @return None
	*/
	void setDescription(std::string description);

	/**
	*  @pre event object created
	*  @post sets date of event
	*  @return None
	*/
	void setDate(int date);

	/**
	*  @pre event object created
	*  @post sets time of event
	*  @return None
	*/
	void setTime(std::string time);

	/**
	*  @pre event object created
	*  @post sets month of event
	*  @return None
	*/
	void setMonth(std::string month);

	/**
	*  @pre event object created
	*  @post writes the event to a file
	*  @return None
	*/
	void writeEvent(std::string datefile, std::string eventfile);

	/**
	*  @pre event object created  and event is written to a file
	*  @post removes event from file
	*  @return None
	*/
	void removeEvent(std::string datefile, std::string file);

private:
	std::string m_description;
	int m_date;
	std::string m_time;
	std::string m_month;
	int m_id;
};
#endif

