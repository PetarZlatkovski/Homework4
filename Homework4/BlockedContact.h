#pragma once
#include<iostream>
#include "Contact.h"

class BlockedContact : public Contact {
private:
	bool blocked;
public:
	BlockedContact();
	BlockedContact(std::string, long int, std::string, bool);
	bool isBlocked();
	void setBlocked(bool);
	void call();
	friend std::istream& operator>>(std::istream& in, BlockedContact& bContact);
};