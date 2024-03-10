#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(weapon){
}

void	HumanA::setName(std::string name){
	this->name = name;
}

std::string	HumanA::getName(void){
	return(this->name);
}

void	HumanA::setWeapon(Weapon &aweapon){
	this->weapon = aweapon;
}

Weapon	HumanA::getWeapon(void){
	return(this->weapon);
}

void	HumanA::attack(void){
	std::string	wType;
	std::string	name;

	wType = this->weapon.getType();
	name = getName();

	std::cout << name << " attacked with " << wType << std::endl;
}