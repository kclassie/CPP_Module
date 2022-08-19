#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
	this->_type = "WrongAnimal";
	std::cout << "Default WrongAnimal constructor called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal( const WrongAnimal & animal ) {
	std::cout << "Copy WrongAnimal constructor called" << std::endl;
	this->_type = animal._type;
	return;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & animal ) {
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	if ( this != & animal ) {
		this->_type = animal._type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal destructor called" << std::endl;
	return;
}

void WrongAnimal::makeSound( void ) const {
	std::cout << "I'm just unidentified animal =((" << std::endl;
	return;
}

const std::string WrongAnimal::getType( void ) const {
	return this->_type;
}