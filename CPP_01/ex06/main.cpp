#include "Harl.hpp"

std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

int findIndex(std::string level) {

	for (int i = 0; i < 4; i++) {
		if (levels[i] == level)
			return i;
	}
	return 4;
}

int callHarl(int index) {
	Harl harl;

	while (index < 4) {
		std::cout << "[ " << levels[index] << " ]" << std::endl;
		harl.complain(levels[index]);
		std::cout << std::endl;
		index++;
	}
	return 0;
}

int main(int argv, char **argc) {

	if (argv != 2) {
		std::cerr << "Error: wrong arguments." << std::endl;
		exit(1);
	}
	std::string lev (argc[1]);
	int index = findIndex(lev);
	switch (index)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			callHarl(index);
			break;
		default:
			std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
	return 0;
}

