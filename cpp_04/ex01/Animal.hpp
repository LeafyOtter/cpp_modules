#pragma once
#ifndef __ANIMAL_H__

#include <string>
#include <iostream>

#define LOG(x) std::cout << x << std::endl

class Animal
{
	public :
		Animal( void );
		Animal( const Animal &rhs );
		virtual ~Animal( void );
		virtual Animal & operator = ( const Animal &rhs );

		virtual void		makeSound( void ) const;
		std::string	getType( void ) const;

	protected :
		std::string	type;
};

#endif
