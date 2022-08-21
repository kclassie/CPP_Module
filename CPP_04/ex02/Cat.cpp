#include "Cat.hpp"

Cat::Cat( void ) {
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
	return;
}

Cat::Cat( const Cat & cat ) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = cat;
	return;
}

Cat & Cat::operator=( const Cat & cat ) {
	std::cout << "Cat assignment operator called" << std::endl;
	this->_type = cat._type;
	this->_brain = new Brain();
	for( int i = 0; i < 100; i++ ) {
		this->_brain->setIdea(cat._brain->getIdea(i), i);
	}
	return *this ;
}

Cat::~Cat( void ) {
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
	return;
}

void Cat::makeSound( void ) const {
	std::cout << "Meeeeoow ♡( ◡‿◡ )" << std::endl;
	return;
}

Brain * Cat::getBrains( void ) const {
	return this->_brain;
}

const std::string Cat::getType( void ) const {
	return this->_type;
}