#include "Brain.hpp"

Brain::Brain( void )
{
	LOG("Constructor of class <Brain> called");
	index = 0;
}

Brain::Brain( const Brain &rhs)
{
	LOG("Copy constructor of class <Brain> called");
	for (int i = 0; i < 100; i++) {
		ideas[i] = rhs.ideas[i];
	}
	index = rhs.index;
}

Brain::~Brain( void )
{
	LOG("Destructor of class <Brain> called");
}

Brain & Brain::operator = ( const Brain &rhs )
{
	LOG("Copy assignement operator for class <Brain> called");
	for (int i = 0; i < 100; i++) {
		ideas[i] = rhs.ideas[i];
	}
	index = rhs.index;
	return (*this);
}

void	Brain::newIdea( std::string idea )
{
	LOG("New idea !");
	if (index == 100)
		index = 0;
	ideas[index] = idea;
	index++;
}

void	Brain::printIdeas( void )
{
	for (int i = 0; !ideas[i].empty(); i++)
		std::cout << ideas[i] << std::endl;
}

