#include <iostream>
#include <iomanip>
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
	bool	isPossible = true;
	float	f;
	std::stringstream s(str);
	s >> f;

	if (str == "-inff" || str == "+inff" || str == "nanf")
		isPossible = false;
	cout << "char: ";
	if (isPossible) {
		if (isprint(static_cast<char>(f)))
			cout << static_cast<char>(f);
		else
			cout <<  "Non displayable";	
	}
	else
		cout << "impossible";
	cout << endl;
	cout << "int: ";
	if (isPossible)
		cout << static_cast<int>(f);
	else
		cout << "impossible";
	cout << endl;
	if (isPossible) {
		cout << std::fixed << std::setprecision(1);
		cout << "float: " << f << "f" << endl;
		cout << "double: " << static_cast<double>(f) << endl;
	}
	else {
		cout << "float: " << str << endl;
		cout << "double: " << str.substr(0, str.length() - 1) << endl;
	}
}

void	printDouble( std::string str )
{
	bool	isPossible = true;
	double	d;
	std::stringstream s(str);
	s >> d;

	if (str == "-inf" || str == "+inf" || str == "nan")
		isPossible = false;
	cout << "char: ";
	if (isPossible) {
		if (isprint(static_cast<char>(d)))
			cout << static_cast<char>(d);
		else
			cout <<  "Non displayable";	
	}
	else
		cout << "impossible";
	cout << endl;
	cout << "int: ";
	if (isPossible)
		cout << static_cast<int>(d);
	else
		cout << "impossible";
	cout << endl;
	if (isPossible) {
		cout << std::fixed << std::setprecision(1);
		cout << "float: " << static_cast<double>(d) << "f" << endl;
		cout << "double: " << d << endl;
	}
	else {
		cout << "float: " << str << "f" << endl;
		cout << "double: " << str << endl;
	}
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
