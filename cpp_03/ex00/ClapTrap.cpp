#include "ClapTrap.hpp"

/*
 *	Constructors
 */

ClapTrap::ClapTrap( void ) :
	_name("Bruno"),
	_hitPoint(10),
	_energyPoint(10),
	_attackDamage(0)
{
	LOG_MSG("Default constructor called");
}

ClapTrap::ClapTrap( const std::string name ) :
	_name(name),
	_hitPoint(10),
	_energyPoint(10),
	_attackDamage(0)
{
	LOG_MSG("Default constructor called with string");
}

ClapTrap::ClapTrap( const ClapTrap &rhs) :
	_name(rhs._name),
	_hitPoint(rhs._hitPoint),
	_energyPoint(rhs._energyPoint),
	_attackDamage(rhs._attackDamage)
{
	LOG_MSG("Copy constructor called");
} 

/*
 *	Destructor
 */

ClapTrap::~ClapTrap( void )
{
	LOG_MSG("Default destructor called");
}

/*
 *	Overload
 */

ClapTrap & ClapTrap::operator = (const ClapTrap &rhs)
{
	LOG_MSG("Copy assignement operator called");
	this->_name = rhs._name;
	this->_hitPoint = rhs._hitPoint;
	this->_energyPoint = rhs._energyPoint;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

/*
 *	Functions
 */

void	ClapTrap::attack( const std::string& target )
{
	unsigned int	energyPoint = _energyPoint;
	unsigned int	hitPoint = _hitPoint;

	PRINT_NAME(_name);
	if (!hitPoint)
		NO_HIT_POINT_MSG(_name);
	if (!energyPoint)
		NO_ENERGY_MSG(_name);
	if (!hitPoint || !energyPoint)
		return ;
	ATK_MSG(target, _attackDamage);
	_energyPoint -= 1;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	PRINT_NAME(_name);
	if (!_hitPoint) {
		_hitPoint = 0;
		NO_HIT_POINT_MSG(_name);
		return ;
	}
	amount = _hitPoint <= amount ? _hitPoint : amount;
	DMG_MSG(amount);
	_hitPoint -= amount;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	unsigned int	energyPoint = _energyPoint;
	unsigned int	hitPoint = _hitPoint;

	PRINT_NAME(_name);
	if (!hitPoint)
		NO_HIT_POINT_MSG(_name);
	if (!energyPoint)
		NO_ENERGY_MSG(_name);
	REPAIR_MSG(amount);
	_hitPoint += amount;
	_energyPoint -= 1;
}

/*
 *	Accessors
 */

void	ClapTrap::setEnergyPoint( unsigned int amount ) {_energyPoint = amount;}
void	ClapTrap::setAttackDamage( unsigned int amount ) {_attackDamage = amount;}
