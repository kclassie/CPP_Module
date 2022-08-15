#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {

public:

	FragTrap( void );
	FragTrap( std::string const & name );
	FragTrap( FragTrap const & );
	FragTrap & operator=( FragTrap const & );
	~FragTrap( void );

	void highFivesGuys( void );
};

#endif