#include "Contact.hpp"
#include <iostream>

// TODO: can't get empty input

void	Contact::getInput() {
	std::cout << "Insert first name : ";
	std::getline(std::cin,this->firstName);
	std::cout << "Insert last name : ";
	std::getline(std::cin,this->lastName);
	std::cout << "Insert nickname : ";
	std::getline(std::cin,this->nickname);
	std::cout << "Insert phone number: ";
	std::getline(std::cin,this->phoneNumber);
	std::cout << "Insert darkest secret ;) : ";
	std::getline(std::cin,this->darkestSecret);
}