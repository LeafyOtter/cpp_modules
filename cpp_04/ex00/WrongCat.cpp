#include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
	LOG("Constructor of class <WrongCat> called");
	type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat &rhs)
{
	LOG("Copy constructor of class <WrongCat> called");
	type = rhs.type;
}

WrongCat::~WrongCat( void )
{
	LOG("Destructor of class <WrongCat> called");
}

WrongCat & WrongCat::operator = ( const WrongCat &rhs )
{
	LOG("Copy assignement operator for class <WrongCat> called");
	this->type = rhs.type;
	return (*this);
}

void	WrongCat::makeSound( void ) const
{
	LOG("WrongMeow");
}
