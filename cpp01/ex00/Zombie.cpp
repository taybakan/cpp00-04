#include "Zombie.hpp"

Zombie::Zombie(std::string name){
	std::cout<< "Constructor is called for " << name << std::endl;
	this->name = name;
}

void	Zombie::announce(void){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void){
	std::cout<< "Destructor is called for " << this->name << std::endl;
}
