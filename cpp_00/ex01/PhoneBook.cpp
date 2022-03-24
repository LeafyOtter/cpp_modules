#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <iomanip>

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

template <typename T>

static void	printColumn(T arg) {
		std::cout << "|";
		std::cout.width(10);
		std::cout << std::right << arg;
}

static bool	isNumber(std::string str)
{
	return (str.find_first_not_of("0123456789") == std::string::npos);
}

void	PhoneBook::search() {
	int			j;
	int			x = 1;
	std::string	input;

	if (!this->nbrContact) {
		std::cout << "No contact in the phonebook yet. Use ADD." << std::endl;
		return ;
	}

	printColumn("Index");
	printColumn("First Name");
	printColumn("Last Name");
	printColumn("Nickname");
	std::cout << "|" << std::endl;
	for (int i = 0; i < this->nbrContact; i++) {
		j = this->nbrContact == 8 ? (this->indexLastContact + 1 + i) % 8: i;
		printColumn(i);
		printColumn(subString(this->ContactArray[j].firstName));
		printColumn(subString(this->ContactArray[j].lastName));
		printColumn(subString(this->ContactArray[j].nickname));
		std::cout << "|" << std::endl;
	}

	do
	{
		std::cout << "Select the index of the selected contact : ";
		getline(std::cin, input);
		if (!isNumber(input)) {
			std::cout << "Invalid index" << std::endl;
			continue ;
		}
		if (input.empty()) {
			std::cout << "Empty line" << std::endl;
				continue ;
		}
		if (input.length() != 1) {
			std::cout << "Invalid index" << std::endl;
			continue ;
		}
		x = input[0] - '0';
		if (x < this->nbrContact)
			break ;
		std::cout << "Invalid index" << std::endl;
	} while (1);
	x = (this->nbrContact == 8) ? (this->nbrContact + 1 + x) % 8 : x;
	this->ContactArray[x].print();
}