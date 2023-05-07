#include"BlockedContact.h"
#include"Contact.h"
#include"FavoriteContact.h"
#include<iostream>
#include<string>

int main() {
	//creating objects
	Contact c1("Petar", 123123123, "pnz220@aubg.edu");
	BlockedContact bC1("Kiril", 456456456, "khl210@aubg.edu", false);
	FavoriteContact fC1("Fady", 789789789, "fma220@aubg.edu", 1);
	BlockedContact bC2;
	FavoriteContact fC2;

	//testing call method from all classes
	c1.call();
	bC1.call();
	fC1.call();

	//creating new object
	std::cout << "Block a new contact.\n";
	std::cin >> bC2;

	//calling new object
	bC2.call();

	//creating new object
	std::cout << "Favorite a new contact.\n";
	std::cin >> fC2;


	//calling new object
	fC2.call();

	return 0;
}	
