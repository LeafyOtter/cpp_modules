#include "Harl.hpp"
#include <iostream>

int main( int ac, char **av ){
	Harl	misterHarl;
	if (ac == 1)
		std::cerr << "Missing parameter" << std::endl;
	else
		misterHarl.complain(av[1]);
	return (0);
}