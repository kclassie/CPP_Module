#include "Ice.hpp"

Ice::Ice( void ) {
//	std::cout << "Ice default constructor called" << std::endl;
	this->_type = "ice";
	return;
}

Ice::Ice( const Ice & ice) {
//	std::cout << "Ice copy constructor called" << std::endl;
	*this = ice;
	return;
}

Ice & Ice::operator=( const Ice & ice) {
//	std::cout << "Cure assignment operator called" << std::endl;
	this->_type = ice._type;
	return *this;
}

Ice::~Ice( void ) {
//	std::cout << "Ice destructor called" << std::endl;
	return;
}

AMateria * Ice::clone( void ) const {
	AMateria * new_ice = new Ice();
	return new_ice;
}

void Ice::use( ICharacter & character ) {
	std::cout << "* shoots an ice bolt at " << character.getName() << " *" << std::endl;
	return;
}