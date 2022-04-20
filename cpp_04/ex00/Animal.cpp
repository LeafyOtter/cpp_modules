#include "Animal.hpp"

Animal::Animal( void ) : type("Animal")
{
	LOG("Constructor of class <Animal> called");
}

Animal::Animal( const Animal &rhs) : type(rhs.type)
{
	LOG("Copy constructor of class <Animal> called");
}

Animal::~Animal( void )
{
	LOG("Destructor of class <Animal> called");
}

Animal & Animal::operator = ( const Animal &rhs )
{
	LOG("Copy assignement operator for class <Animal> called");
	this->type = rhs.type;
	return (*this);
}

void	Animal::makeSound( void ) const
{
	LOG("Appropriate sound");
}

std::string	Animal::getType( void )
{
	return (type);
}
