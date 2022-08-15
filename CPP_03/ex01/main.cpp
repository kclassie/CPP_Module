#include "ScavTrap.hpp"

int main()
{
	ClapTrap first("Parent");
	ScavTrap second;
	ScavTrap third("Child");

	std::cout << "ClapTrap " << first.getName() << " has " << first.getHitPoints()
			  << " Hit Points, " << first.getEnergyPoints() << " Energy Points and "
			  << first.getDamagePoints() << " Damage Points " << std::endl;
	std::cout << "ScavTrap " << second.getName() << " has " << second.getHitPoints()
			  << " Hit Points, " << second.getEnergyPoints() << " Energy Points and "
			  << second.getDamagePoints() << " Damage Points " << std::endl;
	std::cout << "ScavTrap " << third.getName() << " has " << third.getHitPoints()
			  << " Hit Points, " << third.getEnergyPoints() << " Energy Points and "
			  << third.getDamagePoints() << " Damage Points " << std::endl;
	first.attack(second.getName());
	second.attack(third.getName());
	third.guardGate();

	return 0;
}