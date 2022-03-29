#pragma once
#ifndef __ZOMBIE_H__

#include <string>

class Zombie {

	public:
		Zombie( void );
		Zombie( std::string name );
		~Zombie( void );

		void	announce( void );
		void	init( std::string name );

	private:
		std::string	name;

};

Zombie*	zombieHorde( int N, std::string name );

#endif