#pragma once
#ifndef __FIXED_H__

#include <iostream>

# define LOG_MSG(x) std::cout << x << std::endl

class Fixed {

	public :
		Fixed( void );
		Fixed( const int value );
		Fixed( const float value );
		Fixed( const Fixed& old);
		Fixed& operator = (Fixed const &rhs);
		~Fixed( void );

		int		getRawBits( void ) const;
		void	setRawBits(int const raw);
		int		toInt( void ) const;
		float	toFloat( void ) const;

	private :
		int	_value;
		static const int _nb_bits = 8;

};

std::ostream &	operator << ( std::ostream & o, Fixed const & i);

#endif