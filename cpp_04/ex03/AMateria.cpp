#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

AMateria::AMateria( std::string const & type ) : _type(type)
{
	//
}

AMateria::AMateria( AMateria const & rhs )
{
	*this = rhs;
}

AMateria::~AMateria( void )
{
	//
}

AMateria & AMateria::operator = ( AMateria const & rhs )
{
	(void)rhs;
	return *this;
}

std::string const & AMateria::getType() const
{
	return (_type);
}

void AMateria::use( ICharacter& target )
{
	std::cout << "* use a materia on " << target.getName() << " *";
	std::cout << std::endl;
}