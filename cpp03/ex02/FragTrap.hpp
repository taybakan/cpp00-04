#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(std::string _name);
	FragTrap(const FragTrap &src);
	FragTrap &operator=(FragTrap const &src);
	void attack(const std::string &target);
	void highFivesGuys(void);
	~FragTrap(void);
};