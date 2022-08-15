#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) {
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->_name = "default name";
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->_hitPoints = this->FragTrap::_hitPoints;
	this->_energyPoints = this->ScavTrap::_energyPoints;
	this->_damagePoints = this->FragTrap::_damagePoints;

	return;
}

DiamondTrap::DiamondTrap( std:: string const & name ) {
	std::cout << "DiamondTrap constructor called"  << std::endl;
	this->_name = name;
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->_hitPoints = this->FragTrap::_hitPoints;
	this->_energyPoints = this->ScavTrap::_energyPoints;
	this->_damagePoints = this->FragTrap::_damagePoints;

	return;
}

DiamondTrap::DiamondTrap( DiamondTrap const & refDiamondTrap ) {
	*this = refDiamondTrap;
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	return;
}

DiamondTrap & DiamondTrap::operator=( DiamondTrap const & refDiamondTrap ) {
	this->_name = refDiamondTrap._name;
	this->ClapTrap::_name = refDiamondTrap.ClapTrap::_name;
	this->_hitPoints = refDiamondTrap.FragTrap::_hitPoints;
	this->_energyPoints = refDiamondTrap.ScavTrap::_energyPoints;
	this->_damagePoints = refDiamondTrap.FragTrap::_damagePoints;

	return *this;

}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << "DiamondTrap destructor called" << std::endl;
	return;
}

void DiamondTrap::attack(std::string const & target) {
	this->ScavTrap::attack(target);
	return;
}

void DiamondTrap::whoAmI( void ) {
	std::cout << "DiamondTrap name is " << this->_name << " and parent ClapTrap name is "
		<< this->ClapTrap::_name << std::endl;
}

std::string DiamondTrap::getName( void ) const {
	return this->_name;
}

int DiamondTrap::getHitPoints( void ) const {
	return this->_hitPoints;
}

int DiamondTrap::getEnergyPoints( void ) const {
	return this->_energyPoints;
}
int DiamondTrap::getDamagePoints( void ) const {
	return this->_damagePoints;
}