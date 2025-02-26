#include "student.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include "date.h"
#include "address.h"

Student::Student(){
	studentString = "";
	firstName = "";
	lastName = "";
	dob = new Date();
	expectedGrad = new Date();
	address = new Address();
	creditHours = 0;
}
void Student::init(std::string studentString){
	Student::studentString = studentString;
	std::string street;
	std::string city;
	std::string state;
	std::string zip;
	std::string tCreditHours;
	std::string tDob;
	std::string tExpectedGrad;

	std::stringstream converter;
	converter.str(studentString);
	getline(converter, firstName, ',');
	getline(converter, lastName, ',');
	getline(converter, street, ',');
	getline(converter, city, ',');
	getline(converter, state, ',');
	getline(converter, zip, ',');
	getline(converter, tDob, ',');
	getline(converter, tExpectedGrad, ',');
	getline(converter, tCreditHours);
	address->init(street, city, state, zip);
	dob->init(tDob);
	expectedGrad->init(tExpectedGrad);
}
void Student::printStudent(){
	address->printAddress();
	dob->printDate();
	expectedGrad->printDate();
}
std::string Student::getLastFirst(){
	return firstName + " " + lastName;
}
Student::~Student() {
	delete dob;
	delete expectedGrad;
	delete address;
}
