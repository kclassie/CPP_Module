#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "iostream"

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
};


#endif