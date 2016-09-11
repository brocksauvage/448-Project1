#include "EventReader.h"
#include <fstream>
#include <iostream>
#include <vector>

EventReader::EventReader(std::string datefile, std::string eventfile) {
	std::ifstream input(datefile);
	std::string lastDate;
	if (input.is_open()) {
		std::getline(input, lastDate);
	}

	//below code adapted from stack overflow
	std::ifstream inputFile(eventfile);
	std::vector<std::string> events;
	std::string line;
	while (std::getline(inputFile, line)) {
		events.push_back(line);
	}
	//above code adapted from stack overflow

	//print out the events for a given day to the user
	for (int n = 0; n < events.size(); n = n + 4) {
		if (events[n] == lastDate) {
			std::cout << events[n] << "\n" << events[n + 1] << "\n" << events[n + 2] << "\n\n";
		}
	}
}


