#include "Contact.hpp"
#include  <iostream>

int main() {
	Contact newContact;

	newContact.getInput();
	std::cout << "first name : " << newContact.firstName << std::endl;
}