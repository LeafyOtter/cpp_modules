#pragma once
#ifndef __CAT_H__

#include "Animal.hpp"

class Cat : public Animal
{
	public :
		Cat( void );
		Cat( const Cat &rhs );
		virtual ~Cat( void );
		Cat & operator = ( const Cat &rhs );

		void	makeSound( void ) const;
};

#endif