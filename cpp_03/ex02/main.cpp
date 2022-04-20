#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap fragtrap = FragTrap("Georges McGeorges");

	fragtrap.attack("something wierd");
	fragtrap.highFivesGuys();
	fragtrap.takeDamage(32);
	fragtrap.beRepaired(3);
}