#include "Dog.hpp"

Dog::Dog( void )
{
	LOG("Constructor of class <Dog> called");
	type = "Dog";
	_brain = new Brain();
}

Dog::Dog( const Dog &rhs )
{
	LOG("Copy constructor of class <Dog> called");
	*this = rhs;
}

Dog::~Dog( void )
{
	delete _brain;
	LOG("Destructor of class <Dog> called");
}

Dog & Dog::operator = ( const Dog &rhs )
{
	LOG("Copy assignement operator for class <Dog> called");
	if (this != &rhs) {
		this->type = rhs.type;
		delete _brain;
		this->_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

void	Dog::makeSound( void ) const
{
	LOG("Woof");
}

void	Dog::newIdea( std::string idea )
{
	_brain->newIdea(idea);
}

void	Dog::printIdeas( void )
{
	_brain->printIdeas();
}
