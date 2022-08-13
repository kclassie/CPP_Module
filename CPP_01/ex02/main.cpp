# include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "The memory address of the string variable:\n" << &str << std::endl;
	std::cout << "The memory address held by stringPTR:\n" << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF:\n" << &stringREF << std::endl;
	std::cout << "The value of the string variable:\n" << str << std::endl;
	std::cout << "The value pointed to by stringPTR:\n" << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF:\n" << stringREF << std::endl;
}
