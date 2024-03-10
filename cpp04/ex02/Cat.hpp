#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *CatBrain;

public:
	Cat(void);
	Cat(std::string _type);
	Cat(const Cat &src);
	Cat &operator=(const Cat &src);
	void makeSound(void) const;
	~Cat(void);
};

#endif