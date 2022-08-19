#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"
# include "Character.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria* library[4];

public:
	MateriaSource( void );
	MateriaSource( std::string const & newMateria );
	MateriaSource( const MateriaSource & );
	MateriaSource & operator= ( const MateriaSource & );
	~MateriaSource( void );

	void learnMateria( AMateria * );
	AMateria * createMateria( std::string const & type );
};

#endif