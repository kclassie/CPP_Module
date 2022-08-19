#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "iostream"
# include "Brain.hpp"

class Animal {

protected:
	std::string _type;

public:
	Animal( void );
	Animal( const Animal & );
	Animal & operator=( const Animal & );
	virtual ~Animal( void );

	virtual void makeSound( void ) const = 0;
	virtual const std::string getType( void ) const = 0;
	virtual Brain * getBrains( void ) const = 0;
};


#endif