#include "AMateria.hpp"

AMateria::AMateria( void ) {
//	std::cout << "AMateria default constructor called" << std::endl;
	this->_type = "default type";
	return;
}

AMateria::AMateria( std::string const & type ) {
//	std::cout << "AMateria constructor called" << std::endl;
	this->_type = type;
	return;
}

AMateria::AMateria( const AMateria & aMateriaRef ) {
//	std::cout << "AMateria copy constructor called" << std::endl;
	*this = aMateriaRef;
	return;
}

AMateria &AMateria::operator=( const AMateria & aMateriaRef ) {
//	std::cout << "AMateria assignment operator called" << std::endl;
	this->_type = aMateriaRef.getType();
	return *this;
}

void AMateria::use( ICharacter & target ) {
	( void )target;
}

std::string const & AMateria::getType() const {
	return this->_type;
}

AMateria::~AMateria( void ){
//	std::cout << "AMateria destructor called" << std::endl;
	return;
}