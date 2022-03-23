#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook() {
	this->nbrContact = 0;
	this->indexLastContact = -1;
}

void	PhoneBook::add() {
	this->ContactArray[(this->indexLastContact + 1) % 8].getInput();
	this->indexLastContact = (this->indexLastContact + 1) % 8;
	if (this->nbrContact != 8)
		this->nbrContact++;
}

static std::string	subString(std::string str) {
	if (str.length() > 10)
		str[9] = '.';
	return (str.substr(0, str.length() < 10 ? str.length() : 10));
}

void	PhoneBook::search() {
	int	j;

	for (int i = 0; i < this->nbrContact; i++) {
		j = i;
		std::cout << "|";
		std::cout.width(10);
		std::cout << std::right << i;
		std::cout << "|";
		std::cout.width(10);
		std::cout << std::right << subString(this->ContactArray[j].firstName);
		std::cout << "|";
		std::cout.width(10);
		std::cout << std::right << subString(this->ContactArray[j].lastName);
		std::cout << "|";
		std::cout.width(10);
		std::cout << std::right << subString(this->ContactArray[j].nickname);
		std::cout << "|" << std::endl;
	}
}