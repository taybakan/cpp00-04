#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(std::string _name);
	ScavTrap(const ScavTrap &src);
	ScavTrap &operator=(ScavTrap const &src);
	void attack(const std::string &target);
	void guardGate(void);
	~ScavTrap(void);
};