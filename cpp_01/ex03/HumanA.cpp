#include "HumanA.hpp"
#include <iostream>

void	HumanA::attack( void ) {
	std::cout << this->_name << " attacks with their " << this->_type.getType();
	std::cout << std::endl;
}

HumanA::HumanA( std::string name, Weapon& type ) 
	:  _type(type), _name(name)
{
	/*	nothing else to-do	*/
}