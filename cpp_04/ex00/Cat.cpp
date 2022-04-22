#include "Cat.hpp"

Cat::Cat( void )
{
	LOG("Constructor of class <Cat> called");
	type = "Cat";
}

Cat::Cat( const Cat &rhs)
{
	LOG("Copy constructor of class <Cat> called");
	type = rhs.type;
}

Cat::~Cat( void )
{
	LOG("Destructor of class <Cat> called");
}

Cat & Cat::operator = ( const Cat &rhs )
{
	LOG("Copy assignement operator for class <Cat> called");
	this->type = rhs.type;
	return (*this);
}

void	Cat::makeSound( void ) const
{
	LOG("Meow");
}
