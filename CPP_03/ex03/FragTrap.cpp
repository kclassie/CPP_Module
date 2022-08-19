#include "FragTrap.hpp"

FragTrap::FragTrap( void ) {
	std::cout << "Child FragTrap default constructor called" << std::endl;
	this->_name = "default name";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_damagePoints = 30;

	return;
}

FragTrap::FragTrap( std::string const & name ) {
	std::cout << "Child FragTrap constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_damagePoints = 30;

	return;
}

FragTrap::FragTrap( FragTrap const & refFragTrap) {
	std::cout << "Child FragTrap copy constructor called" << std::endl;
	this->_name = refFragTrap._name;
	this->_hitPoints = refFragTrap._hitPoints;
	this->_energyPoints = refFragTrap._energyPoints;
	this->_damagePoints = refFragTrap._damagePoints;

	return;
}

FragTrap & FragTrap::operator=( FragTrap const &  refFragTrap) {
	std::cout << "Child FragTrap copy constructor called" << std::endl;
	this->_name = refFragTrap._name;
	this->_hitPoints = refFragTrap._hitPoints;
	this->_energyPoints = refFragTrap._energyPoints;
	this->_damagePoints = refFragTrap._damagePoints;

	return *this;
}
FragTrap::~FragTrap( void ) {
	std::cout << "Child FragTrap destructor called" << std::endl;

	return;
}

void FragTrap::highFivesGuys( void ) {
	std::cout << "FragTrap "  << this->_name << " says: \"High five!\"" << std::endl;

	return;
}
