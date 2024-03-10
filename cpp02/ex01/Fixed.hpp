#include <iostream>

class Fixed
{
private:
	int fixedNumber;
	static const int bits = 8;

public:
	Fixed(void);
	Fixed(const int nb);
	Fixed(const float nb);
	Fixed(const Fixed &source);
	Fixed &operator=(Fixed const &source);
	int getRawBits(void) const;
	void setRawBits(int toset);
	float toFloat(void) const;
	int toInt(void) const;
	~Fixed(void);
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);