#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	// Animal original();
	Animal *animal = new Dog();
	Animal *animal2 = new Cat();

	animal->makeSound();
	animal2->makeSound();
	// original.makeSound();
	delete animal;
	delete animal2;
	return (EXIT_SUCCESS);
}