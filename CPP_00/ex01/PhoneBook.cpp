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

//********* PhoneBook commands **********\\

void PhoneBook::addContact(void)
{
	std::cout << "Adding contact with Index " << this->_contNum << "\n";
	this->contact[this->_contNum].saveContact(&this->contact[this->_contNum]);
	if (this->_contNum < 7)
		this->_contNum += 1;
}

void PhoneBook::searchContact(void)
{
	int index;

	if (this->_contNum == 0)
	{
		errorOutput("ERROR: No contacts in PhoneBook. You can add some.");
		return ;
	}
	this->displayContacts();
	std::cout << "\nPlease, type the index of contact to get more information: ";
	std::cin >> index;
	if(std::cin.fail())
	{
		std::cin.clear();
		while(std::cin.get() != '\n');
		errorOutput("ERROR: Input value isn't valid. Try again.");
		return ;
	}
	int count;
	if (this->_contNum == 7)
		count = 8;
	else
		count = this->_contNum;
	if (index < 0 || index >= count)
	{
		errorOutput("ERROR: Index's out of range. Try again.");
		return;
	}
	this->displayContactInfo(index);
	return ;
}

void PhoneBook::exitCmd(void)
{
	exit(EXIT_SUCCESS);
}

//********* Utils **********\\

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
		this->addContact();
	else if (command == "SEARCH")
		this->searchContact();
	else if (command == "EXIT")
		this->exitCmd();
	else
		errorOutput("ERROR: Not a valid command. Try again.");
}

void PhoneBook::displayContactInfo(int index)
{
	std::string sep = ":  ";

	std::cout << "Contact Index " << index << " info:\n";
	printElem("First name", sep, 14);
	std::cout << this->contact[index].first_name << "\n";
	printElem("Last name", sep, 14);
	std::cout << this->contact[index].last_name << "\n";
	printElem("Nickname", sep, 14);
	std::cout << this->contact[index].nickname << "\n";
	printElem("Phone number", sep, 14);
	std::cout << this->contact[index].phone_number << "\n";
	printElem("Darkest secret", sep, 14);
	std::cout << this->contact[index].darkest_secret << "\n";
}

void PhoneBook::printElem(std::string elem, std::string sep, int len)
{

	std::cout	<< std::setw(len)
				<< elem
				<< sep;
}

void PhoneBook::errorOutput(std::string message)
{
	std::cout << "\n" << message << "\n";
	this->printPrompt();
}

void PhoneBook::displayContacts(void)
{
	std::string sep = " | ";
	int	count;

	if (this->_contNum == 7)
		count = 8;
	else
		count = this->_contNum;
	std::cout << this->_contNum + 1 << " contacts found in PhoneBook\n";
	std::cout << sep;
	this->printElem("Index", sep, 10);
	this->printElem("First name", sep, 10);
	this->printElem("Last name", sep, 10);
	this->printElem("Nickname", sep, 10);
	std::cout << "\n";
	for (int i = 0; i < count; i++)
	{
		std::cout << sep;
		this->printElem(std::to_string(i), sep, 10);
		this->printElem(this->contact[i].alignField(this->contact[i].first_name, 10), sep, 10);
		this->printElem(this->contact[i].alignField(this->contact[i].last_name, 10), sep, 10);
		this->printElem(this->contact[i].alignField(this->contact[i].nickname, 10), sep, 10);
		std::cout << "\n";
	}
}
