#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
}

void HumanB::attack(void)
{
	std::cout	<< this->name
				<< " attacks with their "
				<< this->weapon->getType()
				<< "\n";
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

HumanB::~HumanB()
{
	return ;
}