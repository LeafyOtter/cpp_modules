#include "Character.hpp"

Character::Character( void )
{
	//
}

Character::Character( std::string const & name ) : _name(name)
{
	for (int i = 0; i < 4; i++) {
		_inventory[i] = NULL;
	}
}

Character::Character( Character const & rhs ) : _name(rhs._name)
{
	for (int i = 0; i < 4; i++) {
		if (rhs._inventory[i])
			_inventory[i] = (rhs._inventory[i])->clone();
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++) {
		if (_inventory[i])
			delete _inventory[i];
	}
}

Character & Character::operator = ( Character const & rhs )
{
	for (int i = 0; i < 4; i++) {
		if (_inventory[i])
			delete _inventory[i];
		if (rhs._inventory[i])
			_inventory[i] = (rhs._inventory[i])->clone();
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (_name);
}

void Character::equip( AMateria* m )
{

}

void Character::unequip( int idx )
{

}

void Character::use( int idx, ICharacter& target )
{

}

