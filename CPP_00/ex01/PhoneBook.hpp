#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
//◦It can store a maximum of 8 contacts. If the user tries to add a 9th contact,
//replace the oldest one by the new one.
class PhoneBook
{
	PhoneBook();
	int			number;
	std::string	first_name;
	std::string	last_name;
	std::string phone_number;
	std::string darkest_secret;
	add_contact();

};


#endif
