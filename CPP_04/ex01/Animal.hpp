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

	virtual void makeSound( void ) const;
	virtual const std::string getType( void ) const;
	virtual Brain * getBrains( void ) const = 0;
};


#endif