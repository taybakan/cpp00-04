#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->name = "Anonymous";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->name = _name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;

	this->name = src.getName();
	this->hitPoints = src.getHitPoints();
	this->energyPoints = src.getEnergyPoints();
	this->attackDamage = src.getAttackDamage();
}

FragTrap &FragTrap::operator=(FragTrap const &src)
{
	std::cout << "FragTrap assignment operator called" << std::endl;

	this->name = src.getName();
	this->hitPoints = src.getHitPoints();
	this->energyPoints = src.getEnergyPoints();
	this->attackDamage = src.getAttackDamage();
	return (*this);
}

void FragTrap::attack(const std::string &target)
{
	if (this->hitPoints == 0)
		std::cout << this->name << " is dead!" << std::endl;
	else if (this->energyPoints == 0)
		std::cout << this->name << " is out of energy points" << std::endl;
	else if (this->attackDamage)
	{
		std::cout << this->name << " named FragTrap attacked " << target << " causing " << this->attackDamage << " damage!" << std::endl;
		this->energyPoints--;
	}
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << ": High Fives Guys!" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap default destructor called" << std::endl;
}