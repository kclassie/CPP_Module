#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Cat cat;
	Dog dog;

	std::cout << "\033[32mAnimal type is: \033[0m" << cat.getType() << " " << std::endl;
	std::cout << "\033[32mAnimal says: \033[0m";
	cat.makeSound();

	std::cout << "\033[32mAnimal type is: \033[0m" << dog.getType() << " " << std::endl;
	std::cout << "\033[32mAnimal says: \033[0m";
	dog.makeSound();

	return 0;
}