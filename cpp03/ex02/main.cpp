#include "FragTrap.hpp"

int main(void)
{
	FragTrap a;
	FragTrap b("Cemal");
	FragTrap c(a);

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

	a.highFivesGuys();
	c.highFivesGuys();

	return (EXIT_SUCCESS);
}