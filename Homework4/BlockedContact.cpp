#include "BlockedContact.h"
#include<iostream>

//constructors
BlockedContact::BlockedContact() : Contact() {
	this->blocked = false;
}

BlockedContact::BlockedContact(std::string name, long int number, std::string email, bool blocked) : Contact() {
	setBlocked(blocked);
}

//getters and setters
bool BlockedContact::isBlocked() {
	return blocked;
}

void BlockedContact::setBlocked(bool blocked) {
		this->blocked = blocked;
}

//override of the call method that checks whethe contact is blocked
void BlockedContact::call() {
	if (isBlocked())
		std::cout << "Currently blocked, cannot make a call.\n";
	else
		std::cout << "Calling " << name<<"\n";
}

//overload of operator>>
std::istream& operator>>(std::istream& in, BlockedContact& bContact) {
	int input;

	std::cout << "\nEnter the name of the contact you would like to block ";
	in >> bContact.name;

	std::cout << "\nEnter the number of the contact you would like to block " ;
	in >> bContact.number;

	std::cout << "\nEnter the email of the contact you would like to block ";
	in >> bContact.email;

	std::cout << "\nAre you sure you want to block this contact?\nEnter (1) if yes,\nEnter (0) if no. ";
	std::cin >> input;
	//simple validation in case other values are inputed
	if (input == 1 || input == 0)
		in >> bContact.blocked;
	else {
		std::cout << "\nInvalid input, contact will be considered unblocked.\n\n";
		bContact.blocked = 0;
	}
	
	bContact.setName(bContact.name);
	bContact.setNumber(bContact.number);
	bContact.setEmail(bContact.email);
	bContact.setBlocked(bContact.blocked);

	return in;
}
