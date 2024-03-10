#include "Phonebook.hpp"

void Phonebook::add()
{
	std::string input;
	int index = getIndex();
	std::cout << "First Name: ";
	std::cin >> input;
	contact[index % 8].setFirstName(input);
	std::cout << "Last Name: ";
	std::cin >> input;
	contact[index % 8].setLastName(input);
	std::cout << "Nickname: ";
	std::cin >> input;
	contact[index % 8].setNickname(input);
	std::cout << "Phone Number: ";
	std::cin >> input;
	contact[index % 8].setPhoneNumber(input);
	std::cout << "Darkest Secret: ";
	std::cin >> input;
	contact[index % 8].setDarkestSecret(input);
	std::cout << "\nContact added" << std::endl;
}

void Phonebook::search()
{
	int i;
	std::string str;

	std::cout << "     index|      name|   surname|  nickname" << std::endl;
	for (int i = 0; i <= 7; i++)
		{	
			std::cout << std::setw(10) << i << "|";
			if (contact[i].getFirstName().length() > 10)
				std::cout << std::setw(10) << contact[i].getFirstName().substr(0, 9) + "."
						  << "|";
			else
				std::cout << std::setw(10) << contact[i].getFirstName() << "|";
			if (contact[i].getLastName().length() > 10)
				std::cout << std::setw(10) << contact[i].getLastName().substr(0, 9) + "."
						  << "|";
			else
				std::cout << std::setw(10) << contact[i].getLastName() << "|";
			if (contact[i].getNickname().length() > 10)
				std::cout << std::setw(10) << contact[i].getNickname().substr(0, 9) + "." << std::endl;
			else
				std::cout << std::setw(10) << contact[i].getNickname() << std::endl;
		}
	std::cout << "Please enter the index of the contact you want to view(0 - 7):" << std::endl;
	std::cin >> str;
	if(!isdigit(str[0]) || str.length() != 1)
		std::cout << "Invalid index" << std::endl;
	else
	{
		i = std::stoi(str);
		if(i >= 0 && i <= 7)
		{	
			std::cout << "     index|      name|   surname|  nickname|phoneNmber|    secret|" << std::endl;
			std::cout << std::setw(10) << i << "|";
			if (contact[i].getFirstName().length() > 10)
				std::cout << std::setw(10) << contact[i].getFirstName().substr(0, 9) + "."
						  << "|";
			else
				std::cout << std::setw(10) << contact[i].getFirstName() << "|";
			if (contact[i].getLastName().length() > 10)
				std::cout << std::setw(10) << contact[i].getLastName().substr(0, 9) + "."
						  << "|";
			else
				std::cout << std::setw(10) << contact[i].getLastName() << "|";
			if (contact[i].getNickname().length() > 10)
				std::cout << std::setw(10) << contact[i].getNickname().substr(0, 9) + "."
							<< "|";
			else
				std::cout << std::setw(10) << contact[i].getNickname() << "|";
			if (contact[i].getPhoneNumber().length() > 10)
				std::cout << std::setw(10) << contact[i].getPhoneNumber().substr(0, 9) + "."
							<< "|";
			else
				std::cout << std::setw(10) << contact[i].getPhoneNumber() << "|";
			if (contact[i].getDarkestSecret().length() > 10)
				std::cout << std::setw(10) << contact[i].getDarkestSecret().substr(0, 9) + "."
							<< "|" << std::endl;
			else
				std::cout << std::setw(10) << contact[i].getDarkestSecret()
							<< "|" << std::endl;
		}
		else
			std::cout << "Invalid index" << std::endl;
	}
}

void Phonebook::list()
{
	int i = 0;
	while(getIndex() > 7 ? i < 8 : i < getIndex())
	{
		std::cout << std::setw(10) << i << "|";
		if(contact[i].getFirstName().length() > 10)
			std::cout << std::setw(10) << contact[i].getFirstName().substr(0, 9) + "." << "|";
		else
			std::cout << std::setw(10) << contact[i].getFirstName() << "|";
		if(contact[i].getLastName().length() > 10)
			std::cout << std::setw(10) << contact[i].getLastName().substr(0, 9) + "." << "|";
		else
			std::cout << std::setw(10) << contact[i].getLastName() << "|";
		if(contact[i].getNickname().length() > 10)
			std::cout << std::setw(10) << contact[i].getNickname().substr(0, 9) + "." << std::endl;
		else
			std::cout << std::setw(10) << contact[i].getNickname() << std::endl;
		i++;
	}
}

int Phonebook::getIndex()
{
	return(index);
}

void Phonebook::setIndex()
{
	this->index++;
}

Phonebook::~Phonebook()
{
	std::cout << "Phonebook destructor called" << std::endl;
}

Phonebook::Phonebook()
{
	std::cout << "Phonebook constructor called" << std::endl;
	Phonebook::index = 0;
}
