#include "Warlock.hpp"

Warlock::Warlock (std::string const &name, std::string const &title) {
	this->name = name;
	this->title = title;
	std::cout << this->name << ": This looks like another boring day." << std::endl;
	return;
}

Warlock::~Warlock ( void ) {
	std::cout << this->name << ": My job here is done!" << std::endl;
	return;
}

std::string const &Warlock::getName( void ) const {
	return this->name;
}

std::string const &Warlock::getTitle( void ) const {
	return this->title;
}

void Warlock::setTitle( const std::string & title) {
	this->title = title;
	return;
}

void Warlock::introduce() const {
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
	return;
}