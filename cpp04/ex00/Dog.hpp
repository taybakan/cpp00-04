#include "Cat.hpp"

class Dog : public Animal
{
public:
	Dog(void);
	Dog(std::string _type);
	Dog(const Dog &src);
	Dog &operator=(const Dog &src);
	void makeSound(void) const;
	~Dog(void);
};