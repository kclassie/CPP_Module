#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "\033[32m ******* GOOD ANIMALS ******* \033[0m" << std::endl;
	std::cout << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal * ptr;
	Dog * dog = new Dog();
	ptr = dog;
	std::cout << "\033[32mAnimal type is: \033[0m" << meta->getType() << " " << std::endl;
	std::cout << "\033[32mCat type is: \033[0m" << i->getType() << " " << std::endl;
	std::cout << "\033[32mDog type is: \033[0m" << j->getType() << " " << std::endl;
	std::cout << "\033[32mCat says: \033[0m";
	i->makeSound();
	std::cout << "\033[32mDog says: \033[0m";
	j->makeSound();
	std::cout << "\033[32mAnimal says: \033[0m";
	meta->makeSound();
	std::cout << "\033[32m DogPtr says: \033[0m";
	dog->makeSound();
	delete meta;
	delete j;
	delete i;
	delete ptr;

	std::cout << std::endl;
	std::cout << "\033[32m ******* WRONG ANIMALS ******* \033[0m" << std::endl;
	std::cout << std::endl;
	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* i2 = new WrongCat();
	std::cout << "\033[32mWrongCat type is: \033[0m" << i2->getType() << " " << std::endl;
	std::cout << "\033[32mWrongCat says: \033[0m";
	i2->makeSound();
	std::cout << "\033[32mAnimal says: \033[0m";
	meta2->makeSound();
	delete meta2;
	delete i2;

	return 0;
}