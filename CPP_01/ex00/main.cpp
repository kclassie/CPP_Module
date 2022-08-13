#include "Zombie.hpp"

int main()
{
	Zombie zombie("First");
	Zombie *zombie1 = new Zombie("Second");
	Zombie *zombie2 = newZombie("Third");

	zombie.announce();
	zombie1->announce();
	zombie2->announce();
	randomChump("Fourth");
	delete zombie2;
	delete zombie1;
	return (0);
}
