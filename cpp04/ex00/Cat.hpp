#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat(void);
	Cat(std::string _type);
	Cat(const Cat &src);
	Cat &operator=(const Cat &src);
	void makeSound(void) const;
	~Cat(void);
};