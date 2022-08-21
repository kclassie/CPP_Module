#include "Bureaucrat.hpp"
#include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

int main( void ) {
	Bureaucrat foo;
	Bureaucrat bar("Bar", 5);
	std::cout << foo << std::endl;
	std::cout << bar << std::endl;
	PresidentialPardonForm form1;
	std::cout << form1 << std::endl;
	PresidentialPardonForm form2("Im a President");
	std::cout << form2 << std::endl;
	ShrubberyCreationForm form3("Tree");
	std::cout << form3 << std::endl;
	form3.beSigned(bar);
	form3.execute(bar);
	RobotomyRequestForm form4("Robot");
	std::cout << form4 << std::endl;
	try {
		form4.beSigned(foo);
	}
	catch ( const Form::GradeTooLowException & e ) {
		std::cout << e.what() << std::endl;
	}
	try {
		form4.execute(bar);
	}
	catch ( const Form::FormNotSignedException & e ) {
		std::cout << e.what() << std::endl;
	}
	try {
		form4.beSigned(bar);
	}
	catch ( const Form::GradeTooLowException & e ) {
		std::cout << e.what() << std::endl;
	}
	try {
		form4.execute(bar);
	}
	catch ( const Form::GradeTooLowException & e ) {
		std::cout << e.what() << std::endl;
	}
	foo.executeForm(form3);
	bar.executeForm(form1);
	bar.signForm(form1);
	bar.executeForm(form1);
	return 0;
}