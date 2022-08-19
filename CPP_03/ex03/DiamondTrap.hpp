#ifndef DIAMONDTRAP_CPP
# define DIAMONDTRAP_CPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

private:
	std::string _name;

public:
	DiamondTrap( void );
	DiamondTrap( std:: string const & name );
	DiamondTrap( DiamondTrap const & );
	DiamondTrap & operator=( DiamondTrap const & );
	~DiamondTrap( void );

	void attack(std::string const & target);
	void whoAmI( void );
	std::string getName( void ) const;
	int getHitPoints( void ) const;
	int getEnergyPoints( void ) const;
	int getDamagePoints( void ) const;
};

#endif