#ifndef INTERN_HPP
# define INTERN_HPP
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {

public:
	Intern( void );
	Intern( const Intern & );
	Intern & operator=( const Intern & );
	~Intern( void );

	Form * makeForm( std::string formName, std::string target );
};

#endif