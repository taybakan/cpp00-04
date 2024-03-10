#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	initCopy(this->_materiaCopy);
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materiaCopy[i])
			delete this->_materiaCopy[i];
		if (src._materiaCopy[i])
			this->_materiaCopy[i] = src._materiaCopy[i];
		else
			this->_materiaCopy[i] = NULL;
	}
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource destructor called" << std::endl;

	for (int i = 0; i < 4; i++)
		if (this->_materiaCopy[i])
			delete this->_materiaCopy[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
	std::cout << "MateriaSource copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_materiaCopy[i])
				delete this->_materiaCopy[i];
			if (rhs._materiaCopy[i])
				this->_materiaCopy[i] = rhs._materiaCopy[i];
			else
				this->_materiaCopy[i] = NULL;
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_materiaCopy[i])
		{
			this->_materiaCopy[i] = materia;
			return;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materiaCopy[i] && this->_materiaCopy[i]->getType() == type)
			return (this->_materiaCopy[i]->clone());
	}
	return (NULL);
}

void MateriaSource::initCopy(AMateria **materiaCopy)
{
	for (int i = 0; i < 4; i++)
		materiaCopy[i] = NULL;
}