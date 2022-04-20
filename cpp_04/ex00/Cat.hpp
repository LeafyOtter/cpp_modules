#pragma once
#ifndef __ANIMAL_H__

#include "Animal.hpp"

class Cat : public Animal
{
	public :
		Cat( void );
		Cat( const Cat &rhs );
		~Cat( void );
		Cat & operator = ( const Cat &rhs );

		void	makeSound( void ) const;
};

#endif