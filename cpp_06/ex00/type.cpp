#include <iostream>
#include <istream>

#include "type.hpp"

static int	isChar( const std::string &str )
{
	if (str.length() == 1 && isalnum(str[0]) && !isdigit(str[0]))
		return (1);
	return (0);
}

static int	isInt( const std::string &str )
{
	for (size_t i = 0; i < str.length(); i++) {
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}

static int	isFloat( const std::string &str )
{
	bool	flag = false;
	size_t	index_F = str.length() - 1;

	if (str[index_F] != 'f')
		return (0);
	if (str == "-inff" || str == "+inff" || str == "nanf")
		return (1);
	for (size_t i = 0; i < index_F; i++) {
		if (str[i] == '.' && !flag && i && index_F - 1 != i)
			flag = true;
		else if ((str[i] == '-' || str[i] == '+') && !i)
			continue ;
		else if (!isdigit(str[i]))
			return (0);
	}
	if (flag)
		return (1);
	return (0);
}

static int	isDouble( const std::string &str )
{
	bool	flag = false;

	if (str == "-inf" || str == "+inf" || str == "nan")
		return (1);
	for (size_t i = 0; i < str.length(); i++) {
		if (str[i] == '.' && !flag && i != str.length() - 1)
			flag = true;
		else if ((str[i] == '-' || str[i] == '+') && !i)
			continue ;
		else if (!isdigit(str[i]))
			return (0);
	}
	if (flag)
		return (1);
	return (0);
}

t_type	getType( const std::string &str )
{
	int (*isType[4])( const std::string &str ) = {&isChar, &isInt, &isFloat, &isDouble};
	t_type	type[4] = {t_char, t_int, t_float, t_double};

	for (int i = 0; i < 4; i++) {
		if (isType[i](str))
			return (type[i]);
	}
	return (t_error);
}
