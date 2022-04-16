#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

//contacts counter (no more than 8 contacts in PhoneBook)
int PhoneBook::_contNum = 0;

//********* PhoneBook commands **********//

void PhoneBook::_addContact(void)
{
	std::cout << "Adding contact with Index " << this->_contNum << "\n";
	this->_contact[this->_contNum].saveContact(&this->_contact[this->_contNum]);
	if (this->_contNum < 7)
		this->_contNum += 1;
}

void PhoneBook::_searchContact(void)
{
	int index;

	if (this->_contNum == 0)
	{
		_errorOutput("ERROR: No contacts in PhoneBook. You can add some.");
		return ;
	}
	this->_displayContacts();
	std::cout << "\nPlease, type the index of contact to get more information: ";
	std::cin >> index;
	if(std::cin.fail())
	{
		std::cin.clear();
		while(std::cin.get() != '\n');
		_errorOutput("ERROR: Input value isn't valid. Try again.");
		return ;
	}
	int count;
	if (this->_contNum == 7)
		count = 8;
	else
		count = this->_contNum;
	if (index < 0 || index >= count)
	{
		_errorOutput("ERROR: Index's out of range. Try again.");
		return;
	}
	this->_displayContactInfo(index);
	return ;
}

void PhoneBook::_exitCmd(void)
{
	exit(EXIT_SUCCESS);
}

//********* Utils **********//

void	PhoneBook::printPrompt(void)
{
	std::cout << "\n*** HOW TO USE THIS PHONEBOOK ***\n";
	std::cout << "**ADD** - to save a new contact;\n\n";
	std::cout << "**SEARCH** - to find the contact;\n\n";
	std::cout << "**EXIT** - to quite the program.\n";
}

void PhoneBook::handleCommand(void)
{
	std::string command;

	std::cout << "\nPlease, type a command: ";
	std::cin >> command;
	if (command == "ADD")
		this->_addContact();
	else if (command == "SEARCH")
		this->_searchContact();
	else if (command == "EXIT")
		this->_exitCmd();
	else
		_errorOutput("ERROR: Not a valid command. Try again.");
}

void PhoneBook::_displayContactInfo(int index)
{
	std::string sep = ":  ";

	std::cout << "Contact Index " << index << " info:\n";
	_printElem("First name", sep, 14);
	std::cout << this->_contact[index].first_name << "\n";
	_printElem("Last name", sep, 14);
	std::cout << this->_contact[index].last_name << "\n";
	_printElem("Nickname", sep, 14);
	std::cout << this->_contact[index].nickname << "\n";
	_printElem("Phone number", sep, 14);
	std::cout << this->_contact[index].phone_number << "\n";
	_printElem("Darkest secret", sep, 14);
	std::cout << this->_contact[index].darkest_secret << "\n";
}

void PhoneBook::_printElem(std::string elem, std::string sep, int len)
{

	std::cout	<< std::setw(len)
				<< elem
				<< sep;
}

void PhoneBook::_errorOutput(std::string message)
{
	std::cout << "\n" << message << "\n";
	this->printPrompt();
}

void PhoneBook::_displayContacts(void)
{
	std::string sep = " | ";
	int	count;

	if (this->_contNum == 7)
		count = 8;
	else
		count = this->_contNum;
	std::cout << this->_contNum + 1 << " contacts found in PhoneBook\n";
	std::cout << sep;
	this->_printElem("Index", sep, 10);
	this->_printElem("First name", sep, 10);
	this->_printElem("Last name", sep, 10);
	this->_printElem("Nickname", sep, 10);
	std::cout << "\n";
	for (int i = 0; i < count; i++)
	{
		std::cout << sep;
		this->_printElem(std::to_string(i), sep, 10);
		this->_printElem(this->_contact[i].alignField(this->_contact[i].first_name, 10), sep, 10);
		this->_printElem(this->_contact[i].alignField(this->_contact[i].last_name, 10), sep, 10);
		this->_printElem(this->_contact[i].alignField(this->_contact[i].nickname, 10), sep, 10);
		std::cout << "\n";
	}
}
