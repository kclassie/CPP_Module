#include "Animal.hpp"

Animal::Animal( void ) {
	this->_type = "Animal";
	std::cout << "Default Animal constructor called" << std::endl;
	return;
}

Animal::Animal( const Animal & animal ) {
	std::cout << "Copy Animal constructor called" << std::endl;
	this->_type = animal._type;
	return;
}

Animal & Animal::operator=( Animal const & animal ) {
	std::cout << "Animal assignment operator called" << std::endl;
	if ( this != & animal ) {
		this->_type = animal._type;
	}
	return *this;
}

Animal::~Animal( void ) {
	std::cout << "Animal destructor called" << std::endl;
	return;
}

void Animal::makeSound( void ) const {
	std::cout << "I'm just unidentified animal =((" << std::endl;
	return;
}

const std::string Animal::getType( void ) const {
	return this->_type;
}