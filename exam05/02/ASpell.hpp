#ifndef ASPELL_HPP
# define ASPELL_HPP
# include <iostream>

class ATarget;

class ASpell {

protected:
	std::string name;
	std::string effects;

public:
    ASpell();
	ASpell(std::string name, std::string effects);
    ASpell(ASpell const &);
    ASpell &operator=(ASpell const &);
	virtual ~ASpell();
	std::string getName() const;
	std::string getEffects() const;
	virtual ASpell * clone() const = 0;
	void launch(const ATarget &) const;

};

# include "ATarget.hpp"

#endif