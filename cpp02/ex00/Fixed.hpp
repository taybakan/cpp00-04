#include <iostream>

class Fixed
{
private:
	int fixedNumber;
	static const int bits = 8;

public:
	Fixed(void);
	Fixed(const Fixed &source);
	Fixed &operator=(Fixed const &source);
	int getRawBits(void) const;
	void setRawBits(int toset);
	~Fixed(void);
};