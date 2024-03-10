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

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedNumber);
}

void Fixed::setRawBits(int toset)
{
	std::cout << "setRawBits member function called" << std::endl;
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

bool Fixed::operator>(const Fixed &rhs) const
{
	return (this->fixedNumber > rhs.fixedNumber);
}

bool Fixed::operator<(const Fixed &rhs) const
{
	return (this->fixedNumber < rhs.fixedNumber);
}

bool Fixed::operator>=(const Fixed &rhs) const
{
	return (this->fixedNumber >= rhs.fixedNumber);
}

bool Fixed::operator<=(const Fixed &rhs) const
{
	return (this->fixedNumber <= rhs.fixedNumber);
}

bool Fixed::operator==(const Fixed &rhs) const
{
	return (this->fixedNumber == rhs.fixedNumber);
}

bool Fixed::operator!=(const Fixed &rhs) const
{

	return (this->fixedNumber != rhs.fixedNumber);
}

Fixed Fixed::operator+(Fixed const &rhs) const
{
	Fixed temp;

	temp.fixedNumber = this->fixedNumber + rhs.fixedNumber;
	return (temp);
}

Fixed Fixed::operator-(Fixed const &rhs) const
{
	Fixed temp;

	temp.fixedNumber = this->fixedNumber - rhs.fixedNumber;
	return (temp);
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
	Fixed temp;

	temp.fixedNumber = this->toFloat() * rhs.toFloat() * (1 << this->bits);
	return (temp);
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
	Fixed temp;

	temp.fixedNumber = (this->toFloat() / rhs.toFloat()) * (1 << this->bits);
	return (temp);
}

Fixed Fixed::operator++(void)
{
	Fixed temp;

	++this->fixedNumber;
	temp.fixedNumber = this->fixedNumber;
	return (temp);
}

Fixed Fixed::operator++(int)
{
	Fixed temp;

	temp.fixedNumber = this->fixedNumber;
	this->fixedNumber++;
	return (temp);
}

Fixed Fixed::operator--(void)
{
	Fixed temp;

	--this->fixedNumber;
	temp.fixedNumber = this->fixedNumber;
	return (temp);
}

Fixed Fixed::operator--(int)
{

	Fixed temp;

	temp.fixedNumber = this->fixedNumber;
	this->fixedNumber--;
	return (temp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.fixedNumber < b.fixedNumber)
		return (a);
	return (b);
}

Fixed const &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.fixedNumber < b.fixedNumber)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.fixedNumber > b.fixedNumber)
		return (a);
	return (b);
}

Fixed const &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.fixedNumber > b.fixedNumber)
		return (a);
	return (b);
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
