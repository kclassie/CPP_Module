#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap first("Parent" );
	ScavTrap second("Child" );
	FragTrap third( "Child2" );

	std::cout << "ClapTrap " << first.getName() << " has " << first.getHitPoints()
			  << " Hit Points, " << first.getEnergyPoints() << " Energy Points and "
			  << first.getDamagePoints() << " Damage Points " << std::endl;
	std::cout << "ScavTrap " << second.getName() << " has " << second.getHitPoints()
			  << " Hit Points, " << second.getEnergyPoints() << " Energy Points and "
			  << second.getDamagePoints() << " Damage Points " << std::endl;
	std::cout << "FragTrap " << third.getName() << " has " << third.getHitPoints()
			  << " Hit Points, " << third.getEnergyPoints() << " Energy Points and "
			  << third.getDamagePoints() << " Damage Points " << std::endl;
	first.attack(second.getName());
	second.attack(third.getName());
	second.guardGate();
	second.beRepaired(10);
	third.highFivesGuys();
	third.takeDamage(5);

	return 0;
}