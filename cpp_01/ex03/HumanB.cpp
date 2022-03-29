#include "HumanB.hpp"
#include <iostream>

void	HumanB::attack( void ) {
	std::cout << this->_name << " attacks with their " << this->_type->getType();
	std::cout << std::endl;
}

void	HumanB::setWeapon( Weapon& type ) {
	this->_type = &type;
}


HumanB::HumanB( std::string name) {
	this->_name = name;
	this->_type = NULL;
}