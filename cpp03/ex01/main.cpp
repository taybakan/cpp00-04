#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap a;
	ScavTrap b("Cemal");
	ScavTrap c(a);

	a.setAttackDamage(3);
	std::cout << a.getName() << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());

	std::cout << b.getName() << " hitPoints : " << b.getHitPoints() << std::endl;

	b.beRepaired(20);

	std::cout << b.getName() << " hitPoints : " << b.getHitPoints() << std::endl;

	std::cout << c.getName() << std::endl;

	c = b;

	std::cout << c.getName() << " hitPoints : " << c.getHitPoints() << std::endl;

	a.guardGate();
	c.guardGate();

	return (EXIT_SUCCESS);
}