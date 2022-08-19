#include "Cure.hpp"

Cure::Cure( void ) {
	std::cout << "Cure default constructor called" << std::endl;
	this->_type = "cure";
	return;
}

Cure::Cure( const Cure & cure) {
	std::cout << "Cure copy constructor called" << std::endl;
	*this = cure;
	return;
}

Cure & Cure::operator=( const Cure & cure) {
	std::cout << "Cure assignment operator called" << std::endl;
	this->_type = cure._type;
	return *this;
}

Cure::~Cure( void ) {
	std::cout << "Cure destructor called" << std::endl;
	return;
}

AMateria * Cure::clone( void ) const {
	AMateria *newCure = new Cure;
	return newCure;
}

void Cure::use( ICharacter & character) {
	std::cout << "* heals " << character.getName() << "’s wounds *" << std::endl;
	return;
}