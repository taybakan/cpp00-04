#include "Contact.hpp"

void Contact::setFirstName(string firstName)
{
	this->firstName = firstName;
}

void Contact::setLastName(string lastName)
{
	this->lastName = lastName;
}

void Contact::setNickname(string nickname)
{
	this->nickname = nickname;
}

void Contact::setPhoneNumber(string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(string secret)
{
	this->secret = secret;
}

string Contact::getFirstName(void)
{
	return (this->firstName);
}

string Contact::getLastName(void)
{
	return (this->lastName);
}

string Contact::getNickname(void)
{
	return (this->nickname);
}

string Contact::getPhoneNumber(void)
{
	return (this->phoneNumber);
}

string Contact::getDarkestSecret(void)
{
	return (this->secret);
}

Contact::~Contact()
{
	std::cout << "Contact Destructor called" << std::endl;
}

Contact::Contact()
{
	std::cout << "Contact Constructor called" << std::endl;
}
