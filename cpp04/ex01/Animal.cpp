#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Default Animal constructor called" << std::endl;
	this->type = "null";
}

Animal::Animal(std::string _type)
{
	std::cout << "Animal constructor called" << std::endl;
	this->type = _type;
}

Animal::Animal(const Animal &src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->type = src.getType();
}

Animal &Animal::operator=(const Animal &src)
{
	std::cout << "Animal assignment operator called" << std::endl;
	this->type = src.getType();
	return (*this);
}

void Animal::setType(std::string _type)
{
	this->type = _type;
}

std::string Animal::getType(void) const
{
	return(this->type);
}

void Animal::makeSound(void) const
{
	std::cout << "bameork!?" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Default Animal destructor called" << std::endl;
}