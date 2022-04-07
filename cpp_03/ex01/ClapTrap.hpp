#pragma once
#ifndef __CLAPTRAP_H__

#include <string>
#include <iostream>

#define LOG_MSG(x) std::cout << x << std::endl
#define ATK_MSG(x, y)	std::cout << "attacks " << x << " for " \
		<< y << " points of damage!" << std::endl
#define PRINT_NAME(x) std::cout << "ClapTrap " << x << " ";
#define DMG_MSG(x) std::cout <<"took " << x << " points of damages!" << std::endl
#define NO_ENERGY_MSG(x)	std::cout << "has no energy left. " << std::endl
#define NO_HIT_POINT_MSG(x)	std::cout << "has no hit points left." << std::endl
#define REPAIR_MSG(x) std::cout << "repaired themselves for " << x << " hit points!" << std::endl;


class ClapTrap
{
	public :
		ClapTrap( void );
		ClapTrap( const std::string name );
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