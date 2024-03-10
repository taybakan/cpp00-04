#include <iostream>

class Weapon{
	private:
		std::string type;
	public:
		Weapon(std::string type);
		Weapon(void);
		void setType(std::string type);
		std::string getType(void);
};