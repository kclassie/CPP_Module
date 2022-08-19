#include "Animal.hpp"

Animal::Animal( void ) {
	std::cout << "Animal default constructor called" << std::endl;
	this->_type = "Animal";
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