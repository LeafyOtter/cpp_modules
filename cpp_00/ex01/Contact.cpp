#include "Contact.hpp"
#include <iostream>

// TODO: can't get empty input

void	Contact::print() {
	std::cout << this->firstName << std::endl;
	std::cout << this->lastName << std::endl;
	std::cout << this->nickname << std::endl;
	std::cout << this->phoneNumber << std::endl;
	std::cout << this->darkestSecret << std::endl;
}

static std::string	getField(std::string msg, std::string str) {
	do
	{
		std::cout << msg;
		std::getline(std::cin, str);
		if (str.empty())
			std::cout << "Field can't be empty" << std::endl;
	} while (str.empty());
	return (str);
}

void	Contact::getInput() {
	this->firstName = getField("Insert first name : ", this->firstName);
	this->lastName = getField("Insert last name : ", this->lastName);
	this->nickname = getField("Insert nickname : ", this->nickname);
	this->phoneNumber = getField("Insert phone number: ", this->phoneNumber);
	this->darkestSecret = getField("Insert darkest secret ;) : ", this->darkestSecret);
}