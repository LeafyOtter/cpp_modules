#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) :
	ClapTrap("Bruno", 100, 50, 20)
{
	LOG_MSG("Default constructor for ScavTrap called");
}

ScavTrap::ScavTrap( const std::string name ) :
	ClapTrap(name, 100, 50, 20)
{
	
	LOG_MSG("Default constructor for ScavTrap called with string");
}

ScavTrap::ScavTrap( const ScavTrap &rhs) : ClapTrap(rhs)
{
	LOG_MSG("Copy constructor for ScavTrap called");
}

ScavTrap::~ScavTrap( void )
{
	LOG_MSG("Default destructor for ScavTrap called");
}

ScavTrap & ScavTrap::operator = (const ScavTrap &rhs)
{
	LOG_MSG("Copy assignement operator for ScavTrap called");
	this->_name = rhs._name;
	this->_hitPoint = rhs._hitPoint;
	this->_energyPoint = rhs._energyPoint;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}


void	ScavTrap::attack( const std::string& target )
{
	std::cout << "ScavTrap " << _name << " ";
	std::cout << "attacks " << target << " for ";
	std::cout << _attackDamage << " points of damage !";
	std::cout << std::endl;
}

void	ScavTrap::guardGate( void )
{
	std::cout << "Beep Boop ! Me is ScavTrap " << _name << "! ";
	std::cout << "Me is in gate keeper mode. Beep Boop !";
	std::cout << std::endl;
}
