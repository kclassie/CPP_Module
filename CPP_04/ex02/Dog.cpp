#include "Dog.hpp"

Dog::Dog( void ) {
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	return;
}

Dog::Dog( const Dog & dog ) {
	std::cout << "Dog copy constructor called" << std::endl;
	this->_type = dog._type;
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++) {
		this->_brain[i] = dog._brain[i];
	}
	return;
}

Dog & Dog::operator=( const Dog & dog ) {
	std::cout << "Dog assignment operator called" << std::endl;
	if ( this != & dog ) {
		this->_type = dog._type;
		this->_brain = dog.getBrains();
	}
	return *this;
}

Dog::~Dog( void ) {
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
	return;
}

void Dog::makeSound( void ) const {
	std::cout << "Woof! ╰(*´︶*)╯♡" << std::endl;
	return;
}

Brain * Dog::getBrains( void ) const {
	return this->_brain;
}

const std::string Dog::getType( void ) const {
	return this->_type;
}