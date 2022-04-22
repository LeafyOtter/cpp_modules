#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type("WrongAnimal")
{
	LOG("Constructor of class <WrongAnimal> called");
}

WrongAnimal::WrongAnimal( const WrongAnimal &rhs) : type(rhs.type)
{
	LOG("Copy constructor of class <WrongAnimal> called");
}

WrongAnimal::~WrongAnimal( void )
{
	LOG("Destructor of class <WrongAnimal> called");
}

WrongAnimal & WrongAnimal::operator = ( const WrongAnimal &rhs )
{
	LOG("Copy assignement operator for class <WrongAnimal> called");
	this->type = rhs.type;
	return (*this);
}

void	WrongAnimal::makeSound( void ) const
{
	LOG("Some WrongAnimal noise");
}

std::string	WrongAnimal::getType( void ) const
{
	return (type);
}
