#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default Dog constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(std::string _type)
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = _type;
}

Dog::Dog(const Dog &src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = src.getType();
}

Dog &Dog::operator=(const Dog &src)
{
	std::cout << "Dog assignment operator called" << std::endl;
	this->type = src.getType();
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "BARK!" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Default Dog destructor called" << std::endl;
}