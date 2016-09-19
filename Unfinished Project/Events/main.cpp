#include "Events.h"
#include "EventReader.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#pragma once

int main() {
	std::cout << "Last Date Viewed: ";

	//create EventReader objects
	EventReader er("LastDate.txt", "EventList.txt");

	//create Event object
	Events e2;

	//deletes the first event of the file
	//comment this back in to see how it works
	//e2.removeEvent("LastDate.txt", "EventList.txt");
	

	//some necessary variables
	std::string month = "";
	int date = 0;
	std::string description = "";
	std::string time = "";

	//created an event object
	Events e1;
	std::cout << "Month of Event?";
	std::cin >> month;
	std::cout << "Date of event?";
	std::cin >> date;
	std::cout << "Time of event?";
	std::cin >> time;
	std::cin.ignore();
	std::cout << "Event description:";
	std::getline(std::cin, description);
	e1.setDescription(description);
	e1.setMonth(month);
	e1.setDate(date);
	e1.setTime(time);
	e1.writeEvent("LastDate.txt", "EventList.txt");








	return(0);
}