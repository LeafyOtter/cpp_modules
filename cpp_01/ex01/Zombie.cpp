#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( void ) {

}

Zombie::Zombie( std::string name ) {
	this->name = name;
}

Zombie::~Zombie( void ) {
	std::cout << this->name << " was slained in combat." << " [DESTROYED]" << std::endl;
}

void	Zombie::announce( void ) {
	std::cout << this->name << ": BraiiiiiiiinnnzzzZ. . ." << std::endl;
}

void	Zombie::init( std::string name ) {
	this->name = name;
}