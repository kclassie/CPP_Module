#include "Form.hpp"

Form::Form( void )
	: _name("Default form"), _signGrade(LOWEST_GRADE),  _executeGrade(LOWEST_GRADE) {
	this->_isSigned = false;
	return;
}

Form::Form( std::string name, int signGrade, int executeGrade )
		: _name(name), _signGrade(signGrade),  _executeGrade(executeGrade) {
	if ( signGrade < HIGHEST_GRADE || executeGrade < HIGHEST_GRADE )
		throw GradeTooHighException();
	if ( signGrade > LOWEST_GRADE || executeGrade > LOWEST_GRADE )
		throw GradeTooLowException();
	this->_isSigned = false;
	return;
}

Form::Form( const Form & ref)
	: _name(ref._name), _signGrade( ref.getSignGrade() ), _executeGrade( ref.getExecuteGrade() ) {
	this->_isSigned = ref._isSigned;
	return;
}

Form & Form::operator=( const Form & ref) {
	this->_isSigned = ref._isSigned;
	return *this;
}

Form::~Form( void ) {
	return;
}

void Form::beSigned( Bureaucrat & bureaucrat ) {
	if (this->_isSigned) {
		std::cout << "\033[32mThe Form " << this->getName() << " has been signed already\033[0m" << std::endl;
		return;
	}
	if (bureaucrat.getGrade() > this->_signGrade)
		throw GradeTooLowException();
	std::cout << "\033[32mBureaucrat " << bureaucrat.getName() << " with Grade " << bureaucrat.getGrade()
			  << " has signed the Form " << this->getName() << "\033[0m" << std::endl;
	this->_isSigned = true;
	return;
}

std::string Form::getName( void ) const {
	return this->_name;
}

int Form::getSignGrade( void ) const {
	return this->_signGrade;
}

int Form::getExecuteGrade( void ) const {
	return this->_executeGrade;
}

bool Form::getStatus( void ) const {
	return this->_isSigned;
}

void Form::setStatus ( bool status ) {
	this->_isSigned = status;
	return;
}

void Form::execute(Bureaucrat const & executor) const {
	if ( !this->_isSigned )
		throw FormNotSignedException();
	if (executor.getGrade() > this->_executeGrade)
		throw GradeTooLowException();
	this->formAction();
	return;
}

std::ostream & operator<<( std::ostream & o, Form const & ref) {
	o << "\033[32mForm " << ref.getName() << ": Grade to sign " << ref.getSignGrade()
		<< ", Grade to execute " << ref.getExecuteGrade();
	if (ref.getStatus())
		o << ", is signed\033[0m";
	else
		o << ". isn't signed\033[0m";
	return o;
}

const char * Form::GradeTooHighException::what() const throw() {
	return("\033[31mFORM ERROR: grade is too high!!\033[0m");
}

const char * Form::GradeTooLowException::what() const throw() {
	return("\033[31mFORM ERROR: grade is too low!!\033[0m");
}

const char * Form::FormNotSignedException::what() const throw() {
	return("\033[31mFORM ERROR: can't be executed! The Form isn't signed\033[0m");
}