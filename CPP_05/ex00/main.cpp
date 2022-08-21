#include "Bureaucrat.hpp"

int main( void ) {
	Bureaucrat foo;
	Bureaucrat bar("Bar", 20);
	std::cout << foo << std::endl;
	std::cout << bar << std::endl;
	Bureaucrat copy = bar;
	std::cout << copy << std::endl;
	copy = foo;
	std::cout << copy << std::endl;
	try {
		Bureaucrat toMuch("BigBoss", 150);
	}
	catch (const Bureaucrat::GradeTooLowException & e) {
		std::cerr << e.what() << std::endl;
	}
	Bureaucrat toMuch("BigBoss", 140);
	try {
		toMuch.decrementGrade(30);
	}
	catch (const Bureaucrat::GradeTooLowException & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << toMuch << std::endl;
	try {
		bar.incrementGrade(30);
	}
	catch (const Bureaucrat::GradeTooHighException & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << bar << std::endl;


}