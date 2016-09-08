#include <iostream>
#include <fstream>
#include "Events.h"
#include <string>
#include <vector>
#pragma once

Events::Events(){
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

void Events::setID() {
	m_id++;
}

int Events::getID() {
	return(m_id);
}

void Events::removeEvent(std::string eventfile){
	std::ifstream InputFile(eventfile);
	std::vector<std::string> events;
	std::string line;
	while (std::getline(InputFile, line)) {
		events.push_back(line);
	}
	events.erase(events.begin(), events.begin() + 4);
	std::ofstream OutputFile;
	OutputFile.open(eventfile);
	for (int i = 0; i < events.size(); i++) {
		OutputFile << events[i] << "\n";
	}
	OutputFile.close();
}

void Events::writeEvent(std::string datefile, std::string eventfile) {
	std::ofstream OutputFile;
	OutputFile.open(datefile, std::ios_base::app);
	OutputFile << m_month << " " << m_date << "\n";
	OutputFile.close();
	OutputFile.open(eventfile, std::ios_base::app);
	OutputFile << m_month << " " << m_date << "\n";
	OutputFile << m_description << "\n";
	OutputFile << m_time << "\n\n";
	OutputFile.close();
}

