#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
	this->_type = "WrongCat";
	std::cout << "Default WrongCat constructor called" << std::endl;
	return;
}

WrongCat::WrongCat( const WrongCat & cat ) {
	std::cout << "Copy WrongCat constructor called" << std::endl;
	this->_type = cat._type;
	return;
}

WrongCat & WrongCat::operator=( const WrongCat & cat ) {
	std::cout << "WrongCat assignment operator called" << std::endl;
	if ( this != & cat ) {
		this->_type = cat._type;
	}
	return *this;
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat destructor called" << std::endl;
	return;
}

void WrongCat::makeSound( void ) const {
	std::cout << "Meeeeoow ♡( ◡‿◡ )" << std::endl;
	return;
}