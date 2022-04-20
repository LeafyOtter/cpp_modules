#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap scavtrap = ScavTrap("Bobby McBobby");

	scavtrap.attack("something wierd");
	scavtrap.guardGate();
	scavtrap.takeDamage(32);
}