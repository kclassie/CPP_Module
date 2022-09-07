#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP
# include <iostream>
# include <vector>
# include "ASpell.hpp"

class ASpell;

class SpellBook {

private:
    std::vector<ASpell*> spellVec;
    SpellBook (SpellBook const & );
    SpellBook operator=(SpellBook const & );

public:
    SpellBook();
    virtual ~SpellBook ( void );

    void learnSpell(ASpell*);
    void forgetSpell(std::string const &);
    ASpell* createSpell(std::string const &);

};

#endif