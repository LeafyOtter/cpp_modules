#pragma once
#ifndef __WEAPON_H__

#include <string>

class Weapon {

	public :
		std::string&	getType( void );
		void			setType( std::string type );
		Weapon( void );
		Weapon( std::string type );

	private :
		std::string		_type;
};

#endif