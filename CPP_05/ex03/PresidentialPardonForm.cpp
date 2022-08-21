#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : Form("Default PresidentialPardonForm", 25, 5) {
	this->_target = "Default target";
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form ("PresidentialPardonForm", 25, 5) {
	this->_target = target;
	return;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & ref) : Form ("PresidentialPardonForm", 25, 5) {
	this->_target = ref._target;
	return;
}

PresidentialPardonForm & PresidentialPardonForm::operator=( const PresidentialPardonForm & ref) {
	this->_target = ref._target;
	return *this;
}
PresidentialPardonForm::~PresidentialPardonForm( void ) {
	return;
}

void PresidentialPardonForm::formAction( void ) const {
	std::cout << "\033[32mInforms that " << this->_target
		<< " has been pardoned by Zaphod Beeblebrox.\033[0m" << std::endl;
	return;
}