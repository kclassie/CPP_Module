#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void Contact::saveContact(Contact *cont)
{
	std::cout << "Please, type the first name: ";
	std::cin >> cont->first_name;
	std::cout << "Please, type the last name: ";
	std::cin >> cont->last_name;
	std::cout << "Please, type the nickname: ";
	std::cin >> cont->nickname;
	std::cout << "Please, type the phone_number: ";
	std::cin >> cont->phone_number;
	std::cout << "Please, type the darkest secret: ";
	std::cin >> cont->darkest_secret;
}

std::string	Contact::alignField(std::string field, int width)
{
	if ((int)field.size() > width)
		return (field.substr(0, width - 1) + ".");
	else
		return (field);
}
