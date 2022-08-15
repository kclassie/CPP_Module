#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {

private:
	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int _damagePoints;

public:
	ClapTrap( void );
	ClapTrap( const std::string & name );
	ClapTrap( const ClapTrap& refClapTrap );
	~ClapTrap( void );

	ClapTrap & operator=( ClapTrap const & clapTrap );

	void attack( const std::string& target );
	void takeDamage( unsigned int amount );
	void beRepaired( unsigned int amount );
	std::string getName( void );
	int getHitPoints( void );
	int getEnergyPoints( void );
	int getDamagePoints( void );
};

#endif