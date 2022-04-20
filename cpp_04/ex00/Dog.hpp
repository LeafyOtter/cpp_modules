#pragma once
#ifndef __ANIMAL_H__

#include "Animal.hpp"

class Dog : public Animal
{
	public :
		Dog( void );
		Dog( const Dog &rhs );
		~Dog( void );
		Dog & operator = ( const Dog &rhs );

		void	makeSound( void ) const;
};

#endif