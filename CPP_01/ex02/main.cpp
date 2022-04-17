#include <iostream>

int main()
{
	std::string		brain = "HI THIS IS BRAIN";
	std::string*	stringPTR = &brain;
	std::string&	stringREF = brain;

	std::cout << "the address of string: " << &brain << "\n";
	std::cout << "the address of string by ptr: " << stringPTR << "\n";
	std::cout << "the address of string by ref: " << &stringREF << "\n";
	std::cout << "the string: " << brain << "\n";
	std::cout << "the string by ptr: " << *stringPTR << "\n";
	std::cout << "the string by ref: " << stringREF << "\n";
	return (0);
}

