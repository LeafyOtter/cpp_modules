#pragma once
#ifndef __CLAPTRAP_H__

#include <string>
#include <iostream>

#define LOG_MSG(x) std::cout << x << std::endl

class ClapTrap
{
	public :
		ClapTrap( void );
		ClapTrap( const std::string name );
		ClapTrap( const std::string name, unsigned int hitPoint, \
			unsigned int energyPoint, unsigned int attackDamage);
		ClapTrap( const ClapTrap &rhs);
		~ClapTrap( void );
		ClapTrap & operator = (const ClapTrap &rhs);

		void	attack( const std::string& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );

		void	setEnergyPoint( unsigned int amount );
		void	setAttackDamage( unsigned int amount );

	protected :
		std::string		_name;
		unsigned int	_hitPoint;
		unsigned int	_energyPoint;
		unsigned int	_attackDamage;
};

#endif