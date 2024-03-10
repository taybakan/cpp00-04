#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <iomanip>
#include "Contact.hpp"
using std::string;

class Phonebook{
private:
	Contact contact[8];
	int index;
public:
	Phonebook();
	void add();
	void search();
	void list();
	int getIndex();
	void setIndex();
	~Phonebook();
};

#endif