#include "Zombie.hpp"

void	randomChump(std::string name){
	Zombie	newZombie(name);
	newZombie.announce();
}

Zombie	*newZombie(std::string name){
	Zombie	*newZombie = new Zombie(name);
	return(newZombie);
}


int	main(void)
{
	Zombie	*Cemal;
	Cemal = newZombie("Cemal");
	Cemal->announce();
	delete Cemal;

	randomChump("Oguz");

	return (EXIT_SUCCESS);
}