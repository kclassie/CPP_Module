#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include <iostream>

class Character : public ICharacter {

private:
	std:: string _name;
	AMateria * _materiasSlots[4];
	AMateria * _materiasTrash[10];

public:
	Character( void );
	Character( std::string const & name );
	Character( const Character & );
	Character & operator=( const Character & );
	~Character( void );

	std::string const & getName( void ) const;
	void equip( AMateria * m );
	void unequip( int idx );
	void use( int idx, ICharacter & target );
};

#endif