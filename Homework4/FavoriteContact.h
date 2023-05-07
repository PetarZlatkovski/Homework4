#pragma once
#include<iostream>
#include "Contact.h"

class FavoriteContact : public Contact {
private:
	int order;
public:
	FavoriteContact();
	FavoriteContact(std::string, long int, std::string, int);
	int getOrder();
	void setOrder(int);
	void call();
	friend std::istream& operator>>(std::istream& in, FavoriteContact& contact);
	friend bool operator!=(const FavoriteContact& c1, const FavoriteContact& c2);
};