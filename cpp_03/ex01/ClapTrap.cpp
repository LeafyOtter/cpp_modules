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
	LOG_MSG("Default constructor for ClapTrap called");
}

ClapTrap::ClapTrap( const std::string name ) :
	_name(name),
	_hitPoint(10),
	_energyPoint(10),
	_attackDamage(0)
{
	LOG_MSG("Default constructor for ClapTrap called with string");
}

ClapTrap::ClapTrap(
	const std::string name,
	unsigned int hitPoint,
	unsigned int energyPoint,
	unsigned int attackDamage) :
	_name(name),
	_hitPoint(hitPoint),
	_energyPoint(energyPoint),
	_attackDamage(attackDamage)
{
	LOG_MSG("Default constructor for ClapTrap called with all paramaters");
}

ClapTrap::ClapTrap( const ClapTrap &rhs) :
	_name(rhs._name),
	_hitPoint(rhs._hitPoint),
	_energyPoint(rhs._energyPoint),
	_attackDamage(rhs._attackDamage)
{
	LOG_MSG("Copy constructor for ClapTrap called");
} 

/*
 *	Destructor
 */

ClapTrap::~ClapTrap( void )
{
	LOG_MSG("Default destructor for ClapTrap called");
}

/*
 *	Overload
 */

ClapTrap & ClapTrap::operator = (const ClapTrap &rhs)
{
	LOG_MSG("Copy assignement operator for ClapTrap called");
	this->_name = rhs._name;
	this->_hitPoint = rhs._hitPoint;
	this->_energyPoint = rhs._energyPoint;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

/*
 * 	Print functions
 */

static void	printName( const std::string &name )
{
	std::cout << "ClapTrap " << name << " ";
}

static void printDamage( unsigned int amount )
{
	std::cout << amount << " points of damage !";
}

static void	printAttackMessage(
		const std::string &name, 
		const std::string &target,
		unsigned int amount)
{
	printName(name);
	std::cout << "attacks " << target << " for ";
	printDamage(amount);
	std::cout << std::endl;
}

static void printDamageMessage(
		const std::string &name,
		unsigned int amount)
{
	printName(name);
	std::cout << "took ";
	printDamage(amount);
	std::cout << std::endl;
}

static void printNoEnergy(
		const std::string &name)
{
	printName(name);
	std::cout << "has no energy left. ";
	std::cout << std::endl;
}

static void printNoHitPoint(
		const std::string &name)
{
	printName(name);
	std::cout << "has no hit points left. ";
	std::cout << std::endl;	
}

static void printRepair(
		const std::string &name,
		unsigned int amount)
{
	printName(name);
	std::cout << "repaired themselves for ";
	printDamage(amount);
	std::cout << std::endl;
}

/*
 *	Functions
 */

void	ClapTrap::attack( const std::string& target )
{
	unsigned int	energyPoint = _energyPoint;
	unsigned int	hitPoint = _hitPoint;

	if (!hitPoint)
		printNoHitPoint(_name);
	if (!energyPoint)
		printNoEnergy(_name);
	if (!hitPoint || !energyPoint)
		return ;
	printAttackMessage(_name, target, _attackDamage);
	_energyPoint -= 1;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (!_hitPoint) {
		_hitPoint = 0;
		printNoHitPoint(_name);
		return ;
	}
	amount = _hitPoint <= amount ? _hitPoint : amount;
	printDamageMessage(_name, amount);
	_hitPoint -= amount;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	unsigned int	energyPoint = _energyPoint;
	unsigned int	hitPoint = _hitPoint;

	if (!hitPoint)
		printNoHitPoint(_name);
	if (!energyPoint)
		printNoEnergy(_name);
	printRepair(_name, amount);
	_hitPoint += amount;
	_energyPoint -= 1;
}

/*
 *	Accessors
 */

void	ClapTrap::setEnergyPoint( unsigned int amount ) {_energyPoint = amount;}
void	ClapTrap::setAttackDamage( unsigned int amount ) {_attackDamage = amount;}
