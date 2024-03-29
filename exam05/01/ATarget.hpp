#ifndef ATARGET_HPP
# define ATARGET_HPP
# include <iostream>

class ASpell;

class ATarget {

protected:

	std::string type;

public:
    ATarget();
	ATarget(std::string type);
	ATarget(ATarget const &);
    ATarget &operator=(ATarget const &);
	virtual ~ATarget();
	std::string const &getType() const;
	virtual ATarget * clone() const = 0;
	void getHitBySpell(const ASpell &) const;

};

# include "ASpell.hpp"

#endif