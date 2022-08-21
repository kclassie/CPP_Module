#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main( void ) {

	Intern someRandomIntern;
	Form * rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << *rrf << std::endl;
	Form * form1;
	form1 = someRandomIntern.makeForm("presidential pardon", "Bastard");
	std::cout << *form1 << std::endl;
	Form * form2;
	form2 = someRandomIntern.makeForm("blablabla", "blablabla");

	delete rrf;
	delete form1;
	return 0;
}