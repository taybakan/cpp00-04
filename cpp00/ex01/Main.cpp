#include "Phonebook.hpp"

using std::cout;
using std::cin;

int main()
{
	Phonebook phonebook;
	std::string input;
	cout << "Welcome to the Phonebook." << std::endl;
	while (1)
	{
		cout << "Please enter a command: " << std::endl;
		cout << "ADD, SEARCH, EXIT" << std::endl;
		cin >> input;
		if(input.compare("ADD") == 0)
		{
			phonebook.add();
			phonebook.setIndex();
			phonebook.list();
		}
		else if(input.compare("SEARCH") == 0)
			phonebook.search();
		else if(input.compare("EXIT") == 0)
			break;
		else
			cout << "Invalid command\n" << std::endl;
	}
	return 0;
}
