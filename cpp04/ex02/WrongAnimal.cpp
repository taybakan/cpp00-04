#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "Default WrongAnimal constructor called" << std::endl;
	this->type = "null";
}

WrongAnimal::WrongAnimal(std::string _type)
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	this->type = _type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	this->type = src.getType();
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	this->type = src.getType();
	return (*this);
}

void WrongAnimal::setType(std::string _type)
{
	this->type = _type;
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong bameork!?" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Default WrongAnimal destructor called" << std::endl;
}