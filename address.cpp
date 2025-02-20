// address.cpp

#include <string>
#include <iostream>
#include <sstream>
#include "address.h"

Address::Address(){
	Address::addressString = "";
	Address::street = "";
	Address::city = "";
	Address::state = "";
	Address::zip = "";
} //end constructor

void Address::init(std::string addressString){
	std::stringstream converter;
	
	std::string street;
	std::string city;
	std::string state;
	std::string zip;

	Address::street;
	Address::city;
	Address::state;
	Address::zip;

	converter.clear();
	converter.str(addressString);

	getline(converter, street, ',');
	getline(converter, city, ',');
	getline(converter, state, ',');
	getline(converter, zip);

	converter.clear();
	converter.str(street);
	converter >> Address::street;

	converter.clear();
	converter.str(city);
	converter >> Address::city;

	converter.clear();
	converter.str(state);
	converter >> Address::state;
	
	converter.clear();
	converter.str(zip);
	converter >> Address::zip;
} //end init

void Address::printAddress(){
	std::cout << Address::street << std::endl;
	std::cout << Address::city << " " << Address::state << "," << Address::zip << std::endl;
} // end printAddress
