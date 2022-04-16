#include <iostream>
#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook PhoneBook;

	PhoneBook.printPrompt();
	while (true)
	{
		PhoneBook.handleCommand();
	}
	return (0);
}