#include "Events.h"
#include "EventReader.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#pragma once

int main() {
	std::cout << "Last Date Viewed: ";

	EventReader er("LastDate.txt", "EventList.txt");
	int choose = 0;
	Events e2;
	e2.removeEvent("EventList.txt");

	std::string month = "";
	int date = 0;
	std::string description = "";
	std::string time = "";
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
	e1.setID();
	std::cout << e1.getID();
	e1.writeEvent("LastDate.txt", "EventList.txt");
	std::cout << "would you like to do this again?";

	






	return(0);
}