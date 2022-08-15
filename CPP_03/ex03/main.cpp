#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap diamond;
	DiamondTrap diamond2("FooBar");

	std::cout << "DiamondTrap " << diamond.getName() << " has " << diamond.getHitPoints()
			  << " Hit Points, " << diamond.getEnergyPoints() << " Energy Points and "
			  << diamond.getDamagePoints() << " Damage Points "
			  << "it's parent is ClapTrap " << diamond.ClapTrap::_name << std::endl;
	std::cout << "DiamondTrap " << diamond2.getName() << " has " << diamond2.getHitPoints()
			  << " Hit Points, " << diamond2.getEnergyPoints() << " Energy Points and "
			  << diamond2.getDamagePoints() << " Damage Points "
			  << "it's parent is ClapTrap " << diamond2.ClapTrap::_name << std::endl;
	diamond.attack(diamond2.getName());
	diamond2.attack(diamond.getName());
	diamond.guardGate();
	diamond.beRepaired(10);
	diamond2.highFivesGuys();
	diamond2.takeDamage(5);
	diamond2.whoAmI();

	return 0;
}