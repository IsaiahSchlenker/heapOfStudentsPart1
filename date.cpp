#include "date.h"
#include <iostream>
#include <fstream>
#include <sstream>

Date::Date(){
	dateString = "";
	month = 0;
	day = 0;
	year = 0;
}
void Date::init(std::string dateString){
	Date::dateString = dateString;
	std::string sMonth;
	std::string sDay;
	std::string sYear;
	std::stringstream converter;
	converter.str(dateString);
	getline(converter, sMonth, '/');
	getline(converter, sDay, '/');
	getline(converter, sYear);

	converter.clear();
	converter.str("");

	converter << sMonth << " " << sDay << " " << sYear;
	converter >> month >> day >> year;
}
void Date::printDate(){
	std::string months[13] = {"null", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	std::string monthString = *(months + month);
	std::cout << monthString << " " << day << ", " << year << std::endl;
}
