#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( ) : _name("default name"), _grade(LOWEST_GRADE) {
	return;
}

Bureaucrat::Bureaucrat( std::string const & name, int grade ) : _name(name) {
	if ( grade > LOWEST_GRADE )
		throw GradeTooLowException();
	if ( grade < HIGHEST_GRADE )
		throw GradeTooHighException();
	else
		this->_grade = grade;
	return;
}

Bureaucrat::Bureaucrat( const Bureaucrat & ref) : _name(ref.getName()) {
	this->_grade = ref.getGrade();
	return;
}


Bureaucrat &Bureaucrat::operator= (const Bureaucrat & ref)
{
	this->_grade = ref.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat( void ) {
	return;
}

std::string Bureaucrat::getName( void ) const {
	return this->_name;
}

int Bureaucrat::getGrade( void ) const {
	return this->_grade;
}

void Bureaucrat::incrementGrade( int value ) {
	int tmp = this->_grade - value;
	if ( tmp < HIGHEST_GRADE )
		throw GradeTooHighException();
	this->_grade = tmp;
	return;
}

void Bureaucrat::decrementGrade( int value ) {
	int tmp = this->_grade + value;
	if ( tmp > LOWEST_GRADE )
		throw GradeTooLowException();
	this->_grade = tmp;
	return;
}

void Bureaucrat::signForm( Form & form ) {
	if (this->_grade > form.getSignGrade())
		throw Form::GradeTooLowException();
	std::cout << "\033[32mBureaucrat " << this->getName() << " with Grade " << this->getGrade()
			  << " has signed the Form " << form.getName() << "\033[0m" << std::endl;
	form.setStatus(true);
	return;
}

const char * Bureaucrat::GradeTooHighException::what() const throw() {
	return("\033[31mERROR: grade is too high!!\033[0m");
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
	return("\033[31mERROR: grade is too law!!\033[0m");
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & ref) {
	o  << "\033[32mBureaucrat " << ref.getName() << " has grade " << ref.getGrade() << "\033[0m";
	return o;
}
