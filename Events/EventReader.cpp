#include "EventReader.h"
#include <fstream>
#include <iostream>
#include <vector>

EventReader::EventReader(std::string datefile, std::string eventfile) {
	std::ifstream input(datefile);
	std::string lastDate = "";
	if (input.is_open()) {
		std::vector<std::string> lines_in_reverse;
		std::string line;
		while (std::getline(input, line)) {
			// Store the lines in reverse order.
			lines_in_reverse.insert(lines_in_reverse.begin(), line);
		}
		lastDate = lines_in_reverse[0];
	}
	//above code adapted from stack overflow

	std::ifstream inputFile(eventfile);
	std::vector<std::string> events;
	std::string line;
	while (std::getline(inputFile, line)) {
		events.push_back(line);
	}

	//print out the events for a given day to the user
	for (int n = 0; n < events.size(); n = n + 4) {
		if (events[n] == lastDate) {
			std::cout << events[n] << "\n" << events[n + 1] << "\n" << events[n + 2] << "\n\n";
		}
	}
}


