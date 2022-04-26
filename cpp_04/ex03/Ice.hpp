#pragma once
#ifndef __ICE_H__

#include <string>

#include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice( void );
		Ice( Ice const & rhs );
		virtual ~Ice( void );
		virtual Ice & operator = ( Ice const & rhs );

		virtual Ice* clone() const;
		virtual void use( ICharacter& target );
};

#endif