#include "Zombie.hpp"

int main( void ) {

	randomChump("Zombie Saolirr");
	randomChump("Zombie Saule");

	Zombie *ptr1 = newZombie("Zombie Mursili");
	Zombie *ptr2 = newZombie("Zombie Fiona");
	ptr1->announce();
	ptr2->announce();
	delete(ptr1);
	delete(ptr2);
}