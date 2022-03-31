#include "Harl.hpp"

int main( int ac, char **av ){
	Harl	misterHarl;
	if (ac == 1)
		misterHarl.complain("DEBUG");
	else
		misterHarl.complain(av[1]);
	return (0);
}