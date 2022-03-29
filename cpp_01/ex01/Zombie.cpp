#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( void ) {

}

Zombie::Zombie( std::string name ) {
	this->_name = name;
}

Zombie::~Zombie( void ) {
	std::cout << this->_name << " was slained in combat." << " [DESTROYED]" << std::endl;
}

void	Zombie::announce( void ) {
	std::cout << this->_name << ": BraiiiiiiiinnnzzzZ. . ." << std::endl;
}

void	Zombie::init( std::string name ) {
	this->_name = name;
}