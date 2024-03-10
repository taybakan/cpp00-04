#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	this->name = "Anonymous";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string _name)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	this->name = _name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;

	this->name = src.getName();
	this->hitPoints = src.getHitPoints();
	this->energyPoints = src.getEnergyPoints();
	this->attackDamage = src.getAttackDamage();
}

ClapTrap &ClapTrap::operator=(ClapTrap const &src)
{
	std::cout << "ClapTrap assignment operator called" << std::endl;

	this->name = src.getName();
	this->hitPoints = src.getHitPoints();
	this->energyPoints = src.getEnergyPoints();
	this->attackDamage = src.getAttackDamage();
	return (*this);
}

void ClapTrap::setName(std::string _name)
{
	this->name = _name;
}

void ClapTrap::setHitPoints(unsigned int _hitPoints)
{
	this->hitPoints = _hitPoints;
}

void ClapTrap::setEnergyPoints(unsigned int _energyPoints)
{
	this->energyPoints = _energyPoints;
}

void ClapTrap::setAttackDamage(unsigned int _attackDamage)
{
	this->attackDamage = _attackDamage;
}

std::string ClapTrap::getName(void) const
{
	return (this->name);
}

unsigned int ClapTrap::getHitPoints(void) const
{
	return (this->hitPoints);
}

unsigned int ClapTrap::getEnergyPoints(void) const
{
	return (this->energyPoints);
}

unsigned int ClapTrap::getAttackDamage(void) const
{
	return (this->attackDamage);
}

void ClapTrap::attack(const std::string &target)
{
	if (this->hitPoints == 0)
		std::cout << this->name << " is dead!" << std::endl;
	else if (this->energyPoints == 0)
		std::cout << this->name << " is out of energy points" << std::endl;
	else if (this->attackDamage)
	{
		std::cout << this->name << " attacked " << target << " causing " << this->attackDamage << " damage!" << std::endl;
		this->energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int temp;

	temp = amount;
	while (this->hitPoints > 0 && temp--)
		this->hitPoints--;
	if (this->hitPoints == 0)
		std::cout << this->name << " is dead!" << std::endl;
	else if (amount > 0)
		std::cout << this->name << " took " << amount << " damage." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints == 0)
		std::cout << this->name << " is dead!" << std::endl;
	else if (this->energyPoints == 0)
		std::cout << this->name << " is out of energy points" << std::endl;
	else if (amount > 0)
	{
		std::cout << this->name << " healed " << amount << " points." << std::endl;
		this->energyPoints--;
		this->hitPoints += amount;
	}
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap default destructor called" << std::endl;
}