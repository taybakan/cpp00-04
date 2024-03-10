#include "HumanB.hpp"

HumanB::HumanB(std::string name):_name(name),_weapon(){
}

void	HumanB::setName(std::string name){
	this->_name = name;
}

std::string	HumanB::getName(void){
	return(this->_name);
}

void	HumanB::setWeapon(Weapon &weapon){
	this->_weapon = &weapon;
}

Weapon	HumanB::getWeapon(void){
	return(this->_weapon->getType());
}

void	HumanB::attack(void){
	std::string	wType;
	std::string	name;

	name = getName();
	if (this->_weapon){
		wType = this->_weapon->getType();
		std::cout << name << " attacked with " << wType << std::endl;
	}
	else
		std::cout << name << " threw a punch" << std::endl;
}
