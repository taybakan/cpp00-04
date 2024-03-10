#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main(void)
{
	Zombie *Horde;

	Horde = zombieHorde(7, "undead");
	for (int i = 0; i < 7; i++)
		Horde[i].announce();
	delete [] Horde;
	return (EXIT_SUCCESS);
}