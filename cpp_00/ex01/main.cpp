#include <iostream>
#include <iomanip> 
#include "PhoneBook.hpp"

int main() {
	PhoneBook	myPhoneBook;
	std::string	input;

	std::cout << "Insert command : ADD, SEARCH or EXIT : ";
	while (42)
	{
		getline(std::cin, input);
		if (input == "ADD")
			myPhoneBook.add();
		else if (input == "SEARCH")
			myPhoneBook.search();
		else if (input == "EXIT")
			break ;
		else
			continue ;
		std::cout << "Insert command : ADD, SEARCH or EXIT : ";
	}
	return (0);
}