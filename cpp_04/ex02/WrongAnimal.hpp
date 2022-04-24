#pragma once
#ifndef __WRONGANIMAL_H__

#include <string>
#include <iostream>

#define LOG(x) std::cout << x << std::endl

class WrongAnimal
{
	public :
		WrongAnimal( void );
		WrongAnimal( const WrongAnimal &rhs );
		virtual ~WrongAnimal( void );
		virtual WrongAnimal & operator = ( const WrongAnimal &rhs );

		void		makeSound( void ) const;
		std::string	getType( void ) const;

	protected :
		std::string	type;
};

#endif
