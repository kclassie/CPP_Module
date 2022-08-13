#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
public:

	Contact(void);

	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string phoneNumber;
	std::string darkestSecret;

	void saveContact(Contact *cont);
	std::string	alignField(std::string field, int width);

	~Contact(void);
};


#endif
