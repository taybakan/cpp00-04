#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default Dog constructor called" << std::endl;
	this->type = "Dog";
	this->DogBrain = new Brain();
}

Dog::Dog(std::string _type)
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = _type;
	this->DogBrain = new Brain();
}

Dog::Dog(const Dog &src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog &Dog::operator=(const Dog &src)
{
	std::cout << "Dog assignment operator called" << std::endl;
	this->type = src.getType();
	this->DogBrain = new Brain(*src.DogBrain);
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "BARK!" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Default Dog destructor called" << std::endl;
	delete this->DogBrain;
}