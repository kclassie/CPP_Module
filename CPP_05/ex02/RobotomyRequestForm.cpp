#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : Form("Default RobotomyRequestForm", 72, 45) {
	this->_target = "Default target";
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form ("RobotomyRequestForm", 72, 45) {
	this->_target = target;
	return;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & ref) : Form ("RobotomyRequestForm", 72, 45) {
	this->_target = ref._target;
	return;
}

RobotomyRequestForm & RobotomyRequestForm::operator=( const RobotomyRequestForm & ref) {
	this->_target = ref._target;
	return *this;
}
RobotomyRequestForm::~RobotomyRequestForm( void ) {
	return;
}

void RobotomyRequestForm::formAction( void ) const {
	std::cout << "\033[32mFr-fr-fr-fr....";
	if (rand() % 2)
		std::cout << this->_target << " has been robotomized successfully\033[0m" << std::endl;
	else
		std::cout << this->_target << " hasn't been robotomized unfortunately\033[0m" << std::endl;
	return;
}