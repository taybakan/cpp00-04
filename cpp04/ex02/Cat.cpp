#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Default Cat constructor called" << std::endl;
	this->type = "Cat";
	this->CatBrain = new Brain();
}

Cat::Cat(std::string _type)
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = _type;
	this->CatBrain = new Brain();
}

Cat::Cat(const Cat &src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src; 
}

Cat &Cat::operator=(const Cat &src)
{
	std::cout << "Cat assignment operator called" << std::endl;
	this->type = src.getType();
	this->CatBrain = new Brain(*src.CatBrain);
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "purrr" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Default Cat destructor called" << std::endl;
	delete this->CatBrain;
}