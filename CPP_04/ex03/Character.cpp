#include "Character.hpp"

Character::Character( ) {
//	std::cout << "Character default constructor called" << std::endl;
	this->_name = "default name";
	for(int i = 0; i < 4; i++)
		_materiasSlots[i] = NULL;
	for(int j = 0; j < 10; j++)
		_materiasTrash[j] = NULL;
	return;
}

Character::Character( std::string const & name ) {
//	std::cout << "Character constructor called" << std::endl;
	this->_name = name;
	for(int i = 0; i < 4; i++)
		_materiasSlots[i] = NULL;
	for(int j = 0; j < 10; j++)
		_materiasTrash[j] = NULL;
	return;
}

Character::Character( const Character & charRef ) {
//	std::cout << "Character copy constructor called" << std::endl;
	*this = charRef;
	return;
}

Character & Character::operator=( const Character & charRef ) {
//	std::cout << "Character assignment operator called" << std::endl;
	this->_name = charRef._name;
	for( int i = 0; i < 4; i++ ) {
		if( charRef._materiasSlots[i] ) {
			if( this->_materiasSlots[i] )
				delete this->_materiasSlots[i];
			this->_materiasSlots[i] = charRef._materiasSlots[i]->clone();
		}
		else {
			if( this->_materiasSlots[i] ) {
				delete this->_materiasSlots[i];
				this->_materiasSlots[i] = NULL;
			}
		}
	}
	for( int j = 0; j < 10; j++ )
		_materiasTrash[j] = NULL;
	return *this;
}

Character::~Character( void ) {
//	std::cout << "Character destructor called" << std::endl;
	for( int i = 0; i < 4; i++ ) {
		if( this->_materiasSlots[i] != NULL )
			delete this->_materiasSlots[i];
	}
	for( int j = 0; j < 10; j++ ) {
		if( this->_materiasTrash[j] != NULL )
			delete this->_materiasTrash[j];
	}
	return;
}

std::string const & Character::getName() const {
	return this->_name;
}

void Character::equip( AMateria * m ) {
	if( !m )
		return;
	for( int i = 0; i < 4; i++ ) {
		if( this->_materiasSlots[i] == m )
			return;
	}
	for( int j = 0; j < 10; j++ ) {
		if( this->_materiasTrash[j] != NULL ) {
			delete this->_materiasTrash[j];
			this->_materiasTrash[j] = NULL;
		}
	}
	for( int i = 0; i < 4; i++ ) {
		if( this->_materiasSlots[i] == NULL ) {
			this->_materiasSlots[i] = m;
			break;
		}
	}
	return;
}

void Character::unequip( int idx ) {
	if ( idx < 0 || idx > 3 )
		return;
	for( int j = 0; j < 10; j++ ) {
		if( this->_materiasTrash[j] == NULL ) {
			this->_materiasTrash[j] = this->_materiasSlots[idx];
			break;
		}
	}
	this->_materiasSlots[idx] = NULL;
	return;
}

void Character::use( int idx, ICharacter & target ) {
	if( idx < 0 || idx > 3 )
		return;
	if( this->_materiasSlots[idx] )
		this->_materiasSlots[idx]->use(target);
}