#pragma once
#ifndef __WRONGCAT_H__

#include "WrongAnimal.hpp" 

class WrongCat : public WrongAnimal
{
	public :
		WrongCat( void );
		WrongCat( const WrongCat &rhs );
		virtual ~WrongCat( void );
		WrongCat & operator = ( const WrongCat &rhs );

		void	makeSound( void ) const;
};

#endif