#include <iostream>

class ClapTrap
{
private:
	std::string name;
	int hitPoints;
	int energyPoints;
	int attackDamage;

public:
	ClapTrap(void);
	ClapTrap(std::string _name);
	ClapTrap(const ClapTrap &src);
	ClapTrap &operator=(ClapTrap const &src);
	void setName(std::string _name);
	void setHitPoints(unsigned int _hitPoints);
	void setEnergyPoints(unsigned int _energyPoints);
	void setAttackDamage(unsigned int _attackDamage);
	std::string getName(void) const;
	unsigned int getHitPoints(void) const;
	unsigned int getEnergyPoints(void) const;
	unsigned int getAttackDamage(void) const;
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	~ClapTrap(void);
};