#include "Contact.h"
#include<iostream>
#include<string>


//constructors
Contact::Contact() {
	name = "Petar";
	number = 0;
	email = "pnz220@aubg.edu";
}

Contact::Contact(std::string n, long int num, std::string e) {
	setName(n);
	setNumber(num);
	setEmail(e);
}

//getters and setters
std::string Contact::getName() {
	return name;
}
void Contact::setName(std::string name) {
	this->name = name;
}
long int Contact::getNumber() {
	return number;
}
//this setter checks for negative numbers
void Contact::setNumber(long int number) {
	if (number < 0)
		std::cout << "Invalid number!";
	else
		this->number = number;
}
std::string Contact::getEmail() {
	return email;
}
void Contact::setEmail(std::string email) {
	this->email = email;
}
//call method
void Contact::call() const {
	std::cout << "Calling " << name<<"\n";
}