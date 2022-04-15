#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "Contact.hpp"
//◦Phonebook can store a maximum of 8 contacts. If the user tries to add a 9th contact,
//replace the oldest one by the new one.
//On program start-up, the phonebook is empty and the user is prompted to enter one
//of three commands. The program only accepts ADD, SEARCH and EXIT.

class PhoneBook
{
public:

	PhoneBook(void);
	void printPrompt(void);
	void handleCommand(void);
	~PhoneBook(void);

private:

	Contact contact[8];
	void addContact(void);
	void searchContact(void);
	void displayContacts(void);
	void printElem(std::string elem, std::string sep, int len);
	void displayContactInfo(int index);
	void exitCmd(void);
	void errorOutput(std::string message);
	static int _contNum;
};

#endif
