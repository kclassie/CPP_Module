#include "ClapTrap.hpp"

int main()
{
	ClapTrap first("Foo");
	ClapTrap second("Bar");
	ClapTrap third;
	ClapTrap fourth = second;
	third = first;

	first.attack(second.getName());
	first.takeDamage(10);
	first.beRepaired(10);
	second.attack(first.getName());
	second.takeDamage(10);
	fourth.attack(third.getName());
	third.attack(fourth.getName());
	std::cout << "ClapTrap " << first.getName() << " has " << first.getHitPoints()
		<< " Hit Points, " << first.getEnergyPoints() << " Energy Points and "
		<< first.getDamagePoints() << " Damage Points " << std::endl;
	std::cout << "ClapTrap " << second.getName() << " has " << second.getHitPoints()
		<< " Hit Points, " << second.getEnergyPoints() << " Energy Points and "
		<< second.getDamagePoints() << " Damage Points " << std::endl;

	return 0;
}