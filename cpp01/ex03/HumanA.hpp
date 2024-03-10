#include "Weapon.hpp"

class HumanA
{
private:
	std::string	name;
	Weapon		&weapon;
public:
	HumanA(std::string name, Weapon &weapon);
	void setName(std::string name);
	void setWeapon(Weapon &aweapon);
	std::string	getName(void);
	Weapon getWeapon(void);
	void attack(void);
};
