#include <iostream>
#include <istream>
#include <sstream>
#include "type.hpp"

void	printInt( std::stringstream str )
{
	std::stringstream s(str);
	int i;
	s >> i;

	log(i);
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
		case t_char
			printChar(av[1][0]);
			break;
		case t_int
			break;
		case t_float
			break;
		case t_double
			break;
		default:
			break;
	}
	// print int

	// print char

	// print double

	// print float
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