#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string type;

public:
	Animal(void);
	Animal(std::string _type);
	Animal(const Animal &src);
	Animal &operator=(const Animal &src);
	void setType(std::string _type);
	std::string getType(void) const;
	virtual void makeSound(void) const = 0;
	virtual ~Animal(void);
};

#endif