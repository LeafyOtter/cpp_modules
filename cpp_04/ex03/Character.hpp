#pragma once
#ifndef __CHARACTER_H__

#include <string>

#include "AMateria.hpp"

class Character : public ICharacter
{
	public:
		Character( std::string const & name );
		Character( Character const & src );
		~Character();
		Character & operator = ( Character const & rhs );

		std::string const & getName() const;
		void equip( AMateria* m );
		void unequip( int idx );
		void use( int idx, ICharacter& target );

	private:
		Character( void );
		std::string	_name;
		AMateria	*_inventory[4];
};

#endif