#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout	<< "Zombie <" << this->_zombieName << "> died =(\n";
}

void	Zombie::announce(void)
{
	std::cout 	<< "<" << this->_zombieName << "> "
				<< "BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::setName(std::string name)
{
	this->_zombieName = name;
}
