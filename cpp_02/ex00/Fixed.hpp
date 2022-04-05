#pragma once
#ifndef __FIXED_H__

# define LOG_MSG(x) std::cout << x << std::endl

class Fixed {

	public :
		Fixed( void );
		Fixed( const Fixed& old);
		Fixed& operator = (Fixed const &rhs);
		~Fixed( void );
		int		getRawBits( void ) const;
		void	setRawBits(int const raw);

	private :
		int	_value;
		static const int _nb_bits = 8;

};

#endif