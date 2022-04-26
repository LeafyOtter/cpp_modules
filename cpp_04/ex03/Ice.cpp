#include "Ice.hpp"
#include <iostream>

Ice::Ice( void ) : AMateria("ice")
{
	//
}

Ice::Ice( Ice const & rhs ) : AMateria("ice")
{
	*this = rhs;
}

Ice::~Ice( void )
{
	//
}

Ice & Ice::operator = ( Ice const & rhs )
{
	(void)rhs;
	return *this;
}

Ice* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *";
	std::cout << std::endl;
}
