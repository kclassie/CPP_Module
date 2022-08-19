#include "Cat.hpp"

Cat::Cat( void ) {
	this->_type = "Cat";
	std::cout << "Default Cat constructor called" << std::endl;
	return;
}

Cat::Cat( const Cat & cat ) {
	std::cout << "Copy Cat constructor called" << std::endl;
	this->_type = cat._type;
	return;
}

Cat & Cat::operator=( const Cat & cat ) {
	std::cout << "Cat assignment operator called" << std::endl;
	if ( this != & cat ) {
		this->_type = cat._type;
	}
	return *this;
}

Cat::~Cat( void ) {
	std::cout << "Cat destructor called" << std::endl;
	return;
}

void Cat::makeSound( void ) const {
	std::cout << "Meeeeoow ♡( ◡‿◡ )" << std::endl;
	return;
}