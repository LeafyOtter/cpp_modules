#include <iostream>
#include <istream>
#include <sstream>
#include <cctype>
#include "type.hpp"

using std::cout;
using std::endl;

void	printChar( char c )
{
	cout << "char: " << c << endl;
	cout << "int: " << static_cast<int>(c) << endl;
	cout << "float: " << static_cast<float>(c) << ".0f" << endl;
	cout << "double: " << static_cast<double>(c) << ".0" << endl;
}

void	printInt( std::string str )
{
	int	i;
	std::stringstream s(str);
	s >> i;

	cout << "char: ";
	if (isprint(i))
		cout << static_cast<char>(i);
	else
		cout <<  "Non displayable";
	cout << endl;
	cout << "int: " << i << endl;
	cout << "float: " << static_cast<float>(i) << ".0f" << endl;
	cout << "double: " << static_cast<double>(i) << ".0" << endl;

}

void	printFloat( std::string str )
{
	float	f;
	std::stringstream s(str);
	s >> f;


}

void	printDouble( std::string str )
{
	double	d;
	std::stringstream s(str);
	s >> d;
}

int	main(int ac, char **av)
{
	t_type	type;

	if (ac != 2) {
		log("Missing paramaters");
		return (1);
	}
	type = getType(av[1]);
	switch (type)
	{
		case t_char :
			printChar(av[1][0]);
			break;
		case t_int :
			printInt(av[1]);
			break;
		case t_float :
			printFloat(av[1]);
			break;
		case t_double :
			printDouble(av[1]);
			break;
		default:
			log("Not a scalar type");
			break;
	}
}

/*
 * 
 std::stringstream s(str_val);

float f;
if (s >> f) {
    // conversion ok
} else {
    // conversion not ok
}*/