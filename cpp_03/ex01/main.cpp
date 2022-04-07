#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap clap1 = ClapTrap("Saolirr X23");

	clap1.attack("a teapot");
	clap1.setAttackDamage(32);
	clap1.attack("a teapot");
	clap1.setEnergyPoint(10);
	clap1.takeDamage(9);
	clap1.beRepaired(3);
}