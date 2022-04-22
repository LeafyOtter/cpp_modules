#pragma once
#ifndef __AANIMAL_H__

#include <string>
#include <iostream>

#define LOG(x) std::cout << x << std::endl

class AAnimal
{
	public :
		AAnimal( void );
		AAnimal( const AAnimal &rhs );
		virtual ~AAnimal( void );
		virtual AAnimal & operator = ( const AAnimal &rhs );

		virtual void		makeSound( void ) const = 0;
		std::string	getType( void ) const;

	protected :
		std::string	type;
};

#endif
