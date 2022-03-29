#include "Weapon.hpp"

#pragma once
#ifndef __HUMAN_B_H__

class HumanB {

	public:
		void	attack( void );
		void	setWeapon( Weapon& type );
		HumanB( std::string name);

	private:
		Weapon*		_type;
		std::string	_name;

};

#endif