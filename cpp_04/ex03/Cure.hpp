#pragma once
#ifndef __CURE_H__

#include <string>

#include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure( void );
		Cure( Cure const & rhs );
		virtual ~Cure( void );
		virtual Cure & operator = ( Cure const & rhs );

		virtual Cure* clone() const;
		virtual void use( ICharacter& target );
};

#endif