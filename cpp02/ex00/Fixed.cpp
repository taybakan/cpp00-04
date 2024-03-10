#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->fixedNumber = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &source)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixedNumber = source.getRawBits();
}

Fixed &Fixed::operator=(Fixed const &source)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixedNumber = source.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(this->fixedNumber);
}

void	Fixed::setRawBits(int toset)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixedNumber = toset;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}
