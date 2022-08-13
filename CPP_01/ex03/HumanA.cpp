#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& type)
{
	this->_name = name;
	this->_weapon = &type;
	return ;
}

HumanA::~HumanA(void)
{ }

void HumanA::attack() {

	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}