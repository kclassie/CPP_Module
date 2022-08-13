#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_zombieName = name;
}

Zombie::~Zombie(void)
{
	std::cout	<< "Zombie " << this->_zombieName << " died =(\n";
}

void Zombie::announce(void)
{
	std::cout 	<<  this->_zombieName << ": "
				<< "BraiiiiiiinnnzzzZ...\n";
}
