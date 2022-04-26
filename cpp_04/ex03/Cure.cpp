#include "Cure.hpp"
#include <iostream>

Cure::Cure( void ) : AMateria("cure")
{
	//
}

Cure::Cure( Cure const & rhs ) : AMateria("cure")
{
	*this = rhs;
}

Cure::~Cure( void )
{
	//
}

Cure & Cure::operator = ( Cure const & rhs )
{
	(void)rhs;
	return *this;
}

Cure* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use( ICharacter& target )
{
	std::cout << "* heals " << target.getName() << "'s wounds *";
	std::cout << std::endl;
}
