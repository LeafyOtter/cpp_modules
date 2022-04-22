#include "Dog.hpp"

Dog::Dog( void )
{
	LOG("Constructor of class <Dog> called");
	type = "Dog";
}

Dog::Dog( const Dog &rhs)
{
	LOG("Copy constructor of class <Dog> called");
	type = rhs.type;
}

Dog::~Dog( void )
{
	LOG("Destructor of class <Dog> called");
}

Dog & Dog::operator = ( const Dog &rhs )
{
	LOG("Copy assignement operator for class <Dog> called");
	this->type = rhs.type;
	return (*this);
}

void	Dog::makeSound( void ) const
{
	LOG("Woof");
}
