#include <iostream>
#include <string>
#include "calendar.h"
#include "month.h"
//#include "event.h"

int main() {
	int var = 0;
	calendar* schoolYear = new calendar();
	schoolYear->print();
	std::cin >> var;

	return 0;
}