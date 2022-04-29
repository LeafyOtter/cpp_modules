#include <iostream>
#include <iomanip>
#include <istream>
#include <sstream>
#include <cctype>
#include <limits>
#include "type.hpp"

using std::cout;
using std::endl;

void	printChar( int c )
{
	cout << "char: ";
	if (c < std::numeric_limits<char>::min() || c > std::numeric_limits<char>::max())
		cout << "impossible";
	if (isprint(c))
		cout << static_cast<char>(c);
	else
		cout <<  "Non displayable";
	cout << endl;
}

void	printInt(long i)
{
	cout << "int: ";
	if (i < std::numeric_limits<int>::min() || i > std::numeric_limits<int>::max())
		cout << "impossible";
	else
		cout << static_cast<int>(i);
	cout << endl;
}

void	printFloat( float f )
{
	cout << std::fixed << std::setprecision(1);
	cout << "float: " << f << "f" << endl;
}

void	printDouble( double d )
{
	cout << std::fixed << std::setprecision(1);
	cout << "double: " << d << endl;
}

void	printLiteral( std::string str )
{
	cout << "char: impossible" << endl;
	cout << "int: impossible" << endl;
	cout << "float: " << str << "f" << endl;
	cout << "double: " << str << endl;
}

void	printChar( char c )
{
	cout << "char: " << c << endl;
	printInt(static_cast<long>(c));
	printFloat(static_cast<float>(c));
	printDouble(static_cast<double>(c));
}

void	printInt( std::string str )
{
	int	i;
	std::stringstream s(str);
	s >> i;

	printChar(i);
	cout << "int: " << i << endl;
	printFloat(static_cast<float>(i));
	printDouble(static_cast<double>(i));

}

void	printFloat( std::string str )
{
	float	f;
	std::stringstream s(str);
	s >> f;

	if (str == "-inff" || str == "+inff" || str == "nanf") {
		printLiteral(str.substr(0, str.length() - 1));
		return ;
	}
	printChar(static_cast<int>(f));
	printInt(static_cast<long>(f));
	printFloat(f);
	printDouble(static_cast<double>(f));
}


void	printDouble( std::string str )
{
	double	d;
	std::stringstream s(str);
	s >> d;

	if (str == "-inf" || str == "+inf" || str == "nan") {
		printLiteral(str);
		return ;
	}
	printChar(static_cast<int>(d));
	printInt(static_cast<long>(d));
	printFloat(static_cast<float>(d));
	printDouble(d);
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
