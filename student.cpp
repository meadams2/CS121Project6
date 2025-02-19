// student.cpp

#include <string>
#include <sstream>
#include <iostream>
#include "date.h"
#include "address.h"

Student::Student(){
	Student::studentString = "";
	Student::firstName = "";
	Student::lastName = "";
	Date birthDate;
	Date gradDate;
	Address address;
	Student::creditHours = 0;
} //end constructor

Student::~Student(){
	delete birthDate;
	delete gradDate;
	delete address;
} //end destructor

void Student::init(std::string studentString) {
	Student::studentString = studentString;

	/*
	std::stringstream converter;


	std::string name;
	std::string sBirthDate;
	std::string sGradDate;
	std::string sAddress;

	converter.clear();
	converter.str(studentString);
	
	getline(converter, fName, ',');
	getline(converter, lName, ',');
	getline(converter, sAddress, ',');
	getline(converter, sBirthDate, ',');
	getline(converter, sGradDate);

	converter.clear();
	converter.str(sAddress);
	converter >> address.init(sAddress);
	
	converter.clear();
	converter.str(sBirthDate);
	converter >> birthDate.init(sBirthDate);

	converter.clear();
	converter.str(sGradDate);
	converter >> gradDate.init(sGradDate);
	*/
} //end init


