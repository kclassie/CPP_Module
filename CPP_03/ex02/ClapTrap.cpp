#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {
	std::cout << "Parent default constructor called" << std::endl;
	this->_name = "default name";
	this->_energyPoints = 10;
	this->_hitPoints = 10;
	this->_damagePoints = 0;

	return;
}

ClapTrap::ClapTrap( const std::string & name ) {
	std::cout << "Parent constructor called" << std::endl;
	this->_name = name;
	this->_energyPoints = 10;
	this->_hitPoints = 10;
	this->_damagePoints = 0;

	return;
}

ClapTrap::ClapTrap( const ClapTrap & refClapTrap ) {
	std::cout << "Parent copy constructor called" << std::endl;
	this->_name = refClapTrap._name;
	this->_damagePoints = refClapTrap._damagePoints;
	this->_energyPoints = refClapTrap._energyPoints;
	this->_hitPoints = refClapTrap._hitPoints;

	return;
}

ClapTrap & ClapTrap::operator=( const ClapTrap & clapTrap ) {
	this->_name = clapTrap._name;
	this->_damagePoints = clapTrap._damagePoints;
	this->_energyPoints = clapTrap._energyPoints;
	this->_hitPoints = clapTrap._hitPoints;

	return *this;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "Parent destructor called" << std::endl;

	return;
}

void ClapTrap::attack( const std::string & target ) {
	if ( this->_hitPoints <= 0 ) {
		std::cout << "ClapTrap " << this->_name
			<< " has not enough Hit Points to attack!" << std::endl;
		return;
	}
	if ( this->_energyPoints <= 0 ) {
		std::cout << "ClapTrap " << this->_name
			<< " has not enough Energy Points to attack!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " attacks "
		<< target << ", causing " << this->_damagePoints
		<< " points of damage!" << std::endl;

	return;
}

void ClapTrap::takeDamage( unsigned int amount ) {
	if (this->_hitPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " is already dead!"
			<< std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " lost " << amount
		<< " hit points!" << std::endl;
	this->_hitPoints -= amount;

	return;
}

void ClapTrap::beRepaired( unsigned int amount ) {
	if (this->_energyPoints <= 0) {
		std::cout << "ClapTrap " << this->_name
				  << " has not enough Energy Points to repair!" << std::endl;
		return;
	}
	this->_hitPoints += amount;
	this->_energyPoints--;
	std::cout << "ClapTrap " << _name << " gets " << amount << " Hit Points!"
		<< std::endl;
}

std::string ClapTrap::getName( void ) {
	return this->_name;
}

int ClapTrap::getHitPoints( void ) {
	return this->_hitPoints;
}

int ClapTrap::getEnergyPoints( void ) {
	return this->_energyPoints;
}

int ClapTrap::getDamagePoints( void ) {
	return this->_damagePoints;
}