#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {
	std::cout << "Child ScavTrap default constructor called" << std::endl;
	this->_name = "default name";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_damagePoints = 20;

	return;
}

ScavTrap::ScavTrap( std::string const & name ) {
	std::cout << "Cild ScavTrap constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_damagePoints = 20;

	return;
}

ScavTrap::ScavTrap( ScavTrap const & refScavTrap) {
	std::cout << "Cild ScavTrap copy constructor called" << std::endl;
	this->_name = refScavTrap._name;
	this->_hitPoints = refScavTrap._hitPoints;
	this->_energyPoints = refScavTrap._energyPoints;
	this->_damagePoints = refScavTrap._damagePoints;

	return;
}

ScavTrap & ScavTrap::operator=( ScavTrap const &  refScavTrap) {
	std::cout << "Cild ScavTrap copy constructor called" << std::endl;
	this->_name = refScavTrap._name;
	this->_hitPoints = refScavTrap._hitPoints;
	this->_energyPoints = refScavTrap._energyPoints;
	this->_damagePoints = refScavTrap._damagePoints;

	return *this;
}
ScavTrap::~ScavTrap( void ) {
	std::cout << "Cild ScavTrap destructor called" << std::endl;

	return;
}

void ScavTrap::attack( const std::string & target ) {
	if ( this->_hitPoints <= 0 ) {
		std::cout << "ScavTrap " << this->_name
				  << " has not enough Hit Points to attack!" << std::endl;
		return;
	}
	if ( this->_energyPoints <= 0 ) {
		std::cout << "ScavTrap " << this->_name
				  << " has not enough Energy Points to attack!" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->_name << " attacks "
			  << target << ", causing " << this->_damagePoints
			  << " points of damage!" << std::endl;
	return;
}

void ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap "  << this->_name << " is now in Gate keeper mode" << std::endl;

	return;
}