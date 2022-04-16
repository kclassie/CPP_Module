#include "Zombie.hpp"

int main()
{
	Zombie	*hord;
	int 	count = 10;

	hord = zombieHorde(count, "meow");
	for (int i = 0; i < count; i++)
		hord[i].announce();
	delete [] hord;
	return (0);
}
