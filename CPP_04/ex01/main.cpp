#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout << "\033[32m*** Leaks check ***\033[0m" << std::endl;
	std::cout << std::endl;

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	std::cout << "\n\033[32m*** Making array of Animals ***\033[0m" << std::endl;
	std::cout << std::endl;

	Animal * animals[10];

	for ( int i = 0; i < 10; i++ ) {
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (int i = 0; i < 10; i++) {
		std::cout << "\033[32mAnimal type is: \033[0m" << animals[i]->getType() << " " << std::endl;
		std::cout << "\033[32mAnimal says: \033[0m";
		animals[i]->makeSound();
		std::cout << "\033[32mAnimal idea № 5 is: \033[0m" << animals[i]->getBrains()->getIdea(5) << std::endl;
		animals[i]->getBrains()->setIdea("WTF!?! ಠ_ಠ", 5);
		std::cout << "\033[32mAnimal idea № 5 is: \033[0m" << animals[i]->getBrains()->getIdea(5) << std::endl;
	}

	for ( int i = 0; i < 10; i++)  {
		delete animals[i];
	}

	std::cout << "\n\033[32m*** Deep copy check ***\033[0m" << std::endl;
	std::cout << std::endl;
	{
		Animal* dogAnimal = new Dog();
		std::cout << "\033[32mAnimal type is: \033[0m" << dogAnimal->getType() << " " << std::endl;
		std::cout << "\033[32mAnimal says: \033[0m";
		dogAnimal->makeSound();
		std::cout << "\033[32mAnimal idea № 5 is: \033[0m" << dogAnimal->getBrains()->getIdea(5) << std::endl;
		dogAnimal->getBrains()->setIdea("WTF!?! ಠ_ಠ", 5);
		std::cout << "\033[32mAnimal idea № 5 is: \033[0m" << dogAnimal->getBrains()->getIdea(5) << std::endl;
		Dog dogCopy(*(Dog*)dogAnimal);
		delete dogAnimal;
		std::cout << "\033[32mAnimal type is: \033[0m" << dogCopy.getType() << " " << std::endl;
		std::cout << "\033[32mAnimal says: \033[0m";
		dogCopy.makeSound();
		std::cout << "\033[32mAnimal idea № 5 is: \033[0m" << dogCopy.getBrains()->getIdea(5) << std::endl;
		std::cout << "dogCopy's brain copied from dogAnimal=>\n" << dogCopy.getBrains() << "\n";
	}
	return 0;
}