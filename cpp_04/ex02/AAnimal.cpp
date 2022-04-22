#include "AAnimal.hpp"

AAnimal::AAnimal( void ) : type("AAnimal")
{
	LOG("Constructor of abstract class <AAnimal> called");
}

AAnimal::AAnimal( const AAnimal &rhs) : type(rhs.type)
{
	LOG("Copy constructor of abstract class <AAnimal> called");
}

AAnimal::~AAnimal( void )
{
	LOG("Destructor of abstract class <AAnimal> called");
}

AAnimal & AAnimal::operator = ( const AAnimal &rhs )
{
	LOG("Copy assignement operator for abstract class <AAnimal> called");
	this->type = rhs.type;
	return (*this);
}

void	AAnimal::makeSound( void ) const
{
	LOG("Some AAnimal noise");
}

std::string	AAnimal::getType( void ) const
{
	return (type);
}
