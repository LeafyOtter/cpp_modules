#include "Cat.hpp"

Cat::Cat( void )
{
	LOG("Constructor of class <Cat> called");
	type = "Cat";
	_brain = new Brain();
}

Cat::Cat( const Cat &rhs)
{
	LOG("Copy constructor of class <Cat> called");
	*this = rhs;
}

Cat::~Cat( void )
{
	delete _brain;
	LOG("Destructor of class <Cat> called");
}

Cat & Cat::operator = ( const Cat &rhs )
{
	LOG("Copy assignement operator for class <Cat> called");
	if (this != &rhs) {
		this->type = rhs.type;
		delete _brain;
		this->_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

void	Cat::makeSound( void ) const
{
	LOG("Meow");
}

void	Cat::newIdea( std::string idea )
{
	_brain->newIdea(idea);
}

void	Cat::printIdeas( void )
{
	_brain->printIdeas();
}
