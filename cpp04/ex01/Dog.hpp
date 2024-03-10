#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *DogBrain;
public:
	Dog(void);
	Dog(std::string _type);
	Dog(const Dog &src);
	Dog &operator=(const Dog &src);
	void makeSound(void) const;
	~Dog(void);
};

#endif