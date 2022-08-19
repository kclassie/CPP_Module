#include "Dog.hpp"

Dog::Dog( void ) {
	this->_type = "Dog";
	std::cout << "Default Dog constructor called" << std::endl;
	return;
}

Dog::Dog( const Dog & dog ) {
	std::cout << "Copy Dog constructor called" << std::endl;
	this->_type = dog._type;
	return;
}

Dog & Dog::operator=( const Dog & dog ) {
	std::cout << "Dog assignment operator called" << std::endl;
	if ( this != & dog ) {
		this->_type = dog._type;
	}
	return *this;
}

Dog::~Dog( void ) {
	std::cout << "Dog destructor called" << std::endl;
	return;
}

void Dog::makeSound( void ) const {
	std::cout << "Woof! ╰(*´︶*)╯♡" << std::endl;
	return;
}