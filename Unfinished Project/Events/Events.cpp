#include <iostream>
#include <fstream>
#include "Events.h"
#include <string>
#include <vector>
#pragma once

Events::Events() {
	m_description = "";
	m_time = "";
	m_date = 0;
	m_month = "";
	m_id = 0;
}

void Events::setDescription(std::string description)
{
	m_description = description;
}

void Events::setDate(int date)
{
	m_date = date;
}

void Events::setTime(std::string time)
{
	m_time = time;
}

void Events::setMonth(std::string month)
{
	m_month = month;
}



void Events::removeEvent(std::string datefile, std::string eventfile) {
	std::ifstream input(datefile);
	std::string lastDate;
	if (input.is_open()) {
		std::getline(input, lastDate);
	}

	std::ifstream InputFile(eventfile);
	std::vector<std::string> events; //holds all events line by line
	std::vector<std::string> focusDay; //holds only the events for the given focus day line by line
	std::vector<std::string> condensed; //takes the focus day vector and condenses the lines to blocks of events
	std::string line;
	int eventNum = 0;
	while (std::getline(InputFile, line)) {
		events.push_back(line);
	}
	for (int n = 0; n < events.size(); n = n + 4) {
		if (events[n] == lastDate) {
			focusDay.push_back(events[n] + "\n" + events[n + 1] + "\n" + events[n + 2] + "\n\n");
		}
	}

	//if there are events on the focus day execute removal code
	if (focusDay.size() > 0) {
		std::cout << "Choose which event: 1 - " << focusDay.size() << " you would like to remove\n";
		std::cin >> eventNum;

		if (eventNum < 1 || eventNum > focusDay.size()) {
			std::cout << "Sorry that's not a valid event number. Try Again.\n";
			std::cin >> eventNum;
		}
		for (int j = 0; j < events.size(); j = j + 4) {
			condensed.push_back(events[j] + "\n" + events[j + 1] + "\n" + events[j + 2] + "\n\n");
		}
		for (int k = 0; k < condensed.size(); k++) {
			if (condensed[k] == focusDay[eventNum - 1]) {
				condensed.erase(condensed.begin() + k);
			}
		}

		std::ofstream OutputFile;
		OutputFile.open(eventfile);
		for (int i = 0; i < condensed.size(); i++) {
			OutputFile << condensed[i];
		}
		OutputFile.close();
	}
	else {
		std::cout << "No events to be deleted\n";
	}
}



void Events::writeEvent(std::string datefile, std::string eventfile) {
	std::ofstream OutputFile;
	OutputFile.open(datefile);
	OutputFile << m_month << " " << m_date << "\n";
	OutputFile.close();
	OutputFile.open(eventfile, std::ios_base::app);
	OutputFile << m_month << " " << m_date << "\n";
	OutputFile << m_description << "\n";
	OutputFile << m_time << "\n\n";
	OutputFile.close();
}

