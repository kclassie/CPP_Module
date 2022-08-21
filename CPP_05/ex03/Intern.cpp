#include "Intern.hpp"

Intern::Intern( void ) {
	return;
}

Intern::Intern( const Intern & ref) {
	*this = ref;
	return;
}

Intern & Intern::operator=( const Intern & ref ) {
	if( this == & ref )
		return *this;
	return *this;
}

Intern::~Intern( void ) {
	return;
}

Form * Intern::makeForm( std::string formName, std::string target ) {
	std::string formsList[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};

	int index = -1;
	for (int i = 0; i < 3; i++) {
		if (formName == formsList[i])
			index = i;
	}
	switch (index)
	{
		case 0:
			return (new RobotomyRequestForm(target));
		case 1:
			return (new PresidentialPardonForm(target));
		case 2:
			return (new ShrubberyCreationForm(target));
		default: {
			std::cout << "\033[31mIntern can't find the Form " << formName
					  << "\033[0m" << std::endl;
			return NULL;
		}
	}
}