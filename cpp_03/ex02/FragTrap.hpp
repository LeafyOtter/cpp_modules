#pragma once
#ifndef __FRAGTRAP_H__

#include "ClapTrap.hpp"

#define LOG_MSG(x) std::cout << x << std::endl

class FragTrap : public ClapTrap
{
	public :
		FragTrap( void );
		FragTrap( const std::string name );
		FragTrap( const FragTrap &rhs);
		~FragTrap( void );
		FragTrap & operator = (const FragTrap &rhs);

		void	attack( const std::string& target );
		void	guardGate( void );
};

#endif