#ifndef WARLOCK_HPP
# define WARLOCK_HPP
# include <iostream>
# include "ASpell.hpp"
# include "ATarget.hpp"
# include <vector>
# include "SpellBook.hpp"

class Warlock {
private:
	std::string name;
	std::string title;
	SpellBook spellBook;

	Warlock();
	Warlock (Warlock const & );
	Warlock operator=(Warlock const & );

public:
	Warlock (std::string const &name, std::string const &title);
	~Warlock ( void );

	std::string const &getName( void ) const;
	std::string const &getTitle( void ) const;
	void setTitle( std::string const  &title);
	void introduce() const;
	void learnSpell(ASpell *);
	void forgetSpell(std::string const &spellName);
	void launchSpell(std::string const &spellName, ATarget const &);

};

#endif