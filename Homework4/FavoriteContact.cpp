#include"FavoriteContact.h"
#include<iostream>

//constructors
FavoriteContact::FavoriteContact() : Contact() {
	this->order = order;
}

FavoriteContact::FavoriteContact(std::string name, long int number, std::string email, int order) : Contact(){
	setOrder(order);
}

//getters and setters
int FavoriteContact::getOrder() {
	return order;
}
void FavoriteContact::setOrder(int order) {
	this->order = order;
}
//override of the the call method
void FavoriteContact::call() {
	std::cout << "Calling my " << order << " favourite contact - " << name << std::endl;
}

//overload of operators >> and !=
std::istream& operator>>(std::istream& in, FavoriteContact& contact) {
    std::cout << "Enter name: ";
    in >> contact.name;
    std::cout << "Enter phone number: ";
    in >> contact.number;
    while (contact.number < 0) {
        std::cout << "Invalid phone number entered. Enter a positive number: ";
        in >> contact.number;
    }
    std::cout << "Enter email: ";
    in >> contact.email;
    std::cout << "Enter order (1-5): ";
    in >> contact.order;
    while (contact.order < 1 || contact.order > 5) {
        std::cout << "Invalid order entered. Order should be between 1 and 5. Enter order again: ";
        in >> contact.order;
    }
    return in;
}
bool operator!=(FavoriteContact& c1, FavoriteContact& c2) {
    if (c1.getName() != c2.getName()) {
        return true;
    }
}