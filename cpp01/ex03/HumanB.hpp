#include "HumanA.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon		*_weapon;
public:
	HumanB(std::string name);
	void setName(std::string name);
	void setWeapon(Weapon &weapon);
	std::string	getName(void);
	Weapon getWeapon(void);
	void attack(void);
};
