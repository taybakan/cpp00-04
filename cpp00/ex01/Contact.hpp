#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
using std::string;

class Contact
{
	private:
		string firstName, lastName, nickname, phoneNumber, secret;
	public:
		Contact();
		void setFirstName(string firstName);
		void setLastName(string lastName);
		void setNickname(string nickname);
		void setPhoneNumber(string phoneNumber);
		void setDarkestSecret(string secret);
		string getFirstName(void);
		string getLastName(void);
		string getNickname(void);
		string getPhoneNumber(void);
		string getDarkestSecret(void);
		~Contact();
};

#endif