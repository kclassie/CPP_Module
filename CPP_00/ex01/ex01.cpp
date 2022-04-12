//On program start-up, the phonebook is empty and the user is prompted to enter one
//of three commands. The program only accepts ADD, SEARCH and EXIT.
#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

void add_cmd(void)
{
	std::cout << "\nAdding new contact...\n";
	std::cout << "\nPlease, type first name:";
	std::cout << "\nPlease, type last name:";
	std::cout << "\nPlease, type phone number:";
	std::cout << "\nPlease, type darkest secret:";
}

void search_cmd(void)
{

}

void exit_cmd(void)
{
	exit(EXIT_SUCCESS);
}

void	print_prompt(void)
{
	std::cout << "How to use:\n";
	std::cout << "**ADD** - to save a new contact;\n\n";
	std::cout << "**SEARCH** - to find the contact;\n\n";
	std::cout << "**EXIT** - to quite the program.\n";
}

void get_command(void)
{
	std::string input;

	std::cout << "\nPlease, type a command:";
	std::cin >> input;
	if (input == "ADD")
		add_cmd();
	if (input == "SEARCH")
		std::cout << input << "\n";
	if (input == "EXIT")
		exit_cmd();
	else
		return ;
}

int main(void)
{
	print_prompt();
	while (true)
		get_command();
}