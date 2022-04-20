#include "FragTrap.hpp"

FragTrap::FragTrap( void ) :
	ClapTrap("Bruno", 100, 100, 30)
{
	LOG_MSG("Default constructor for FragTrap called");
}

FragTrap::FragTrap( const std::string name ) :
	ClapTrap(name, 100, 100, 30)
{
	
	LOG_MSG("Default constructor for FragTrap called with string");
}

FragTrap::FragTrap( const FragTrap &rhs) : ClapTrap(rhs)
{
	LOG_MSG("Copy constructor for FragTrap called");
}

FragTrap::~FragTrap( void )
{
	LOG_MSG("Default destructor for FragTrap called");
}

FragTrap & FragTrap::operator = (const FragTrap &rhs)
{
	LOG_MSG("Copy assignement operator for FragTrap called");
	this->_name = rhs._name;
	this->_hitPoint = rhs._hitPoint;
	this->_energyPoint = rhs._energyPoint;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}


void	FragTrap::highFivesGuys( void )
{
	std::cout << "Beep Boop ! Me is FragTrap " << _name << "! ";
	std::cout << "I am asking for a high five. Come on guys. Please...";
	std::cout << std::endl;
}
