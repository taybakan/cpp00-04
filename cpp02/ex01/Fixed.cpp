#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->fixedNumber = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(nb * (1 << this->bits));
}

Fixed::Fixed(const float nb)
{

	std::cout << "Float constructor called" << std::endl;
	setRawBits(roundf(nb * (1 << this->bits)));
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
	return(this->fixedNumber);
}

void	Fixed::setRawBits(int toset)
{
	this->fixedNumber = toset;
}

float Fixed::toFloat(void) const
{
	return ((float)this->fixedNumber / (float)(1 << bits));
}

int Fixed::toInt(void) const
{
	return (this->fixedNumber / (1 << this->bits));
}



Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}