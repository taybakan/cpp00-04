#include <iostream>

class WrongAnimal
{
protected:
	std::string type;

public:
	WrongAnimal(void);
	WrongAnimal(std::string _type);
	WrongAnimal(const WrongAnimal &src);
	WrongAnimal &operator=(const WrongAnimal &src);
	void setType(std::string _type);
	std::string getType(void) const;
	void makeSound(void) const;
	virtual ~WrongAnimal(void);
};