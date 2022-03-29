#include "Zombie.hpp"

int main(void) {
	int	N = 10;
	Zombie* newHorde = zombieHorde(N, "Nurgle's Army");

	for (int i = 0; i < N; i++) {
		newHorde[i].announce();
	}
	delete [] newHorde;
}