#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {

protected:
	int _hitPoints;
	int _energyPoints;
	int _damagePoints;

public:
	std::string _name;
	ClapTrap( void );
	ClapTrap( const std::string & name );
	ClapTrap( const ClapTrap& refClapTrap );
	ClapTrap & operator=( ClapTrap const & clapTrap );
	~ClapTrap( void );

	void attack( const std::string& target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );
	std::string getName( void );
	int getHitPoints( void );
	int getEnergyPoints( void );
	int getDamagePoints( void );
};

#endif