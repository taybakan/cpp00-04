#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->name = "Anonymous";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->name = _name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;

	this->name = src.getName();
	this->hitPoints = src.getHitPoints();
	this->energyPoints = src.getEnergyPoints();
	this->attackDamage = src.getAttackDamage();
}

ScavTrap &ScavTrap::operator=(ScavTrap const &src)
{
	std::cout << "ScavTrap assignment operator called" << std::endl;

	this->name = src.getName();
	this->hitPoints = src.getHitPoints();
	this->energyPoints = src.getEnergyPoints();
	this->attackDamage = src.getAttackDamage();
	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	if (this->hitPoints == 0)
		std::cout << this->name << " is dead!" << std::endl;
	else if (this->energyPoints == 0)
		std::cout << this->name << " is out of energy points" << std::endl;
	else if (this->attackDamage)
	{
		std::cout << this->name << " named ScavTrap attacked " << target << " causing " << this->attackDamage << " damage!" << std::endl;
		this->energyPoints--;
	}
}

void ScavTrap::guardGate(void)
{

	std::cout << this->name << " gate keeper mode activated" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap default destructor called" << std::endl;
}