#pragma once
#ifndef __AMATERIA_H__

#include <string>

#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string	_type;
	
	public:
		AMateria( std::string const & type );
		AMateria( AMateria const & rhs );
		virtual ~AMateria( void );
		virtual AMateria & operator = ( AMateria const & rhs );

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use( ICharacter& target );

	private:
		AMateria( void );
};

#endif