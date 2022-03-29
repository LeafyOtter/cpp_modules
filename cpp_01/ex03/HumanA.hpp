#include "Weapon.hpp"

#pragma once
#ifndef __HUMAN_A_H__

class HumanA {

	public:
		void	attack( void );
		HumanA( std::string name, Weapon& type);

	private:
		Weapon&		_type;
		std::string	_name;

};

#endif
