#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	public:

	ScavTrap( void );
	ScavTrap( std::string const & name );
	ScavTrap( ScavTrap const & );
	ScavTrap & operator=( ScavTrap const & );
	~ScavTrap( void );

	void attack( const std::string & target );
	void guardGate( void );
};



#endif