#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "Default WrongCat constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(std::string _type)
{
	std::cout << "WrongCat constructor called" << std::endl;
	this->type = _type;
}

WrongCat::WrongCat(const WrongCat &src)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	this->type = src.getType();
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
	std::cout << "WrongCat assignment operator called" << std::endl;
	this->type = src.getType();
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << "Wrong purrr" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Default WrongCat destructor called" << std::endl;
}