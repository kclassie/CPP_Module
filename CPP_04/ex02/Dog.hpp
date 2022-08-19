#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class  Dog : public Animal {

private:
	Brain * _brain;

public:
	Dog( void );
	Dog( const Dog & );
	Dog & operator=( const Dog & );
	~Dog( void );

	void makeSound( void ) const;
	Brain * getBrains( void ) const;
	const std::string getType( void ) const;
};

#endif