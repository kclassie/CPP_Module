#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
	std::cout << "MateriaSource default constructor called" << std::endl;
	for( int i = 0; i < 4; i++ )
		this->library[i] = NULL;
	return;
}

MateriaSource::MateriaSource( std::string const & newMateria ) {
	std::cout << "MateriaSource constructor called" << std::endl;
	if( !newMateria.empty() ) {
		for( int i = 0; i < 4; i++ ) {
			this->library[i] = NULL;
		}
	}
	return;
}

MateriaSource::MateriaSource( const MateriaSource & materiaRef ) {
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = materiaRef;
	return;
}

MateriaSource & MateriaSource::operator= ( const MateriaSource & materiaRef ) {
	std::cout << "MateriaSource assignment operator called" << std::endl;
	for( int i = 0; i < 4; i++ ) {
		if( materiaRef.library[i] ) {
			if( this->library[i] )
				delete this->library[i];
			this->library[i] = materiaRef.library[i]->clone();
		}
		else {
			if( this->library[i] ) {
				delete this->library[i];
				this->library[i] = NULL;
			}
		}
	}
	return *this;
}

MateriaSource::~MateriaSource( void ) {
	std::cout << "MateriaSource destructor called" << std::endl;
	for( int i = 0; i < 4; i++ ) {
		if( this->library[i] != NULL )
			delete this->library[i];
	}
}

void MateriaSource::learnMateria( AMateria * newMateria ) {
	for( int i = 0; i < 4; i++ )
	{
		if( library[i] == NULL ) {
			library[i] = newMateria;
			return;
		}
	}
}

AMateria * MateriaSource::createMateria( std::string const & type ) {
	if( type.empty() )
		return 0;
	for( int i = 0; i < 4; i++ ) {
		if( this->library[i] && this->library[i]->getType() == type )
			return (this->library[i]->clone());
	}
	return 0;
}
