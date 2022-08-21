#include "Bureaucrat.hpp"

int main( void ) {
	Bureaucrat foo;
	Bureaucrat bar("Bar", 5);
	std::cout << foo << std::endl;
	std::cout << bar << std::endl;
	Form form1;
	Form form2 ("Form2", 15, 10);
	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;
	try {
		Form form3("BadForm", 160, 160);
	}
	catch (const Form::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		foo.signForm(form2);
	}
	catch (const Form::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		foo.signForm(form2);
	}
	catch (const Form::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		bar.signForm(form2);
	}
	catch (const Form::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		form2.beSigned(bar);
	}
	catch (const Form::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}