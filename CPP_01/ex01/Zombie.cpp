#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout	<< "Zombie <" << this->_name << "> died =(\n";
}

void	Zombie::announce(void)
{
	std::cout 	<< this->_name
				<< ": BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}
