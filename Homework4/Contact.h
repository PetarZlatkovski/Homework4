#pragma once
#include<iostream>
#include<string>

class Contact {
protected://protected so that the child classes can acces these members
	std::string name;
	long int number;
	std::string email;
public://the public methods
	Contact();
	Contact(std::string, long int, std::string);
	std::string getName();
	void setName(std::string);
	long int getNumber();
	void setNumber(long int);
	std::string getEmail();
	void setEmail(std::string);
	virtual void call() const;
};