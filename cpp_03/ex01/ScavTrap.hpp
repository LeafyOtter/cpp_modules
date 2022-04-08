#pragma once
#ifndef __SCAVTRAP_H__

#include "ClapTrap.hpp"

#define LOG_MSG(x) std::cout << x << std::endl

class ScavTrap : public ClapTrap
{
	public :
		ScavTrap( void );
		ScavTrap( const std::string name );
		ScavTrap( const ScavTrap &rhs);
		~ScavTrap( void );
		ScavTrap & operator = (const ScavTrap &rhs);

		void	attack( const std::string& target );
		void	guardGate( void );
};

#endif