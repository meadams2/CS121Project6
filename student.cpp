// student.cpp

#include <string>
#include <sstream>
#include <iostream>
#include "date.h"
#include "address.h"
#include "student.h"

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

	
	std::stringstream converter;


	std::string name;
	std::string sBirthDate;
	std::string sGradDate;
	std::string sAddress;
	std::string sCreditHours;

	Student::firstName;
	Student::lastName;
	Student::creditHours;

	converter.clear();
	converter.str(studentString);
	
	getline(converter, firstName, ',');
	getline(converter, lastName, ',');
	getline(converter, sAddress, ',');
	getline(converter, sBirthDate, ',');
	getline(converter, sGradDate, ',');
	getline(converter, sCreditHours);

	converter.clear();
	converter.str(firstName);
	converter >> Student::firstName;

	converter.clear();
	converter.str(lastName);
	converter >> Student::lastName;

	converter.clear();
	converter.str(sAddress);
	converter >> address->init(sAddress);
	
	converter.clear();
	converter.str(sBirthDate);
	converter >> birthDate->init(sBirthDate);

	converter.clear();
	converter.str(sGradDate);
	converter >> gradDate->init(sGradDate);
	
	converter.clear();
	converter.str(sCreditHours);
	converter >> Student::creditHours;
} //end init

std::string Student::getFirstName(){
	return firstName;
} //end getFirstName

std::string Student::getLastName(){
	return lastName;
} //end getLastName

int Student::getCreditHours(){
	return creditHours;
} //end getCreditHours

void Student::printStudent(){
	std::cout << getFirstName() << " " << getLastName() << std::endl;
	std::cout << address << std::endl; 
	std::cout << "DOB: " << birthDate->printDate() << std::endl;
	std::cout << "Grad: " << gradDate->printDate() << std::endl;
	std::cout << "Credits: " << getCreditHours() << std::endl;
	std::cout << getLastName() << "," << getFirstName() << std::endl;
} // end printStudent
