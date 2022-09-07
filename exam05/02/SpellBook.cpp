#include "SpellBook.hpp"


SpellBook::SpellBook() {}
SpellBook::~SpellBook ( void ) {}

void SpellBook::learnSpell(ASpell* spell) {
    if (spell) {
        std::vector<ASpell*>::iterator ite = this->spellVec.end();
        for (std::vector<ASpell*>::iterator it = this->spellVec.begin(); it != ite; ++it)
            if ((*it)->getName() == spell->getName())
                return ;
        this->spellVec.push_back(spell->clone());
    }
}
void SpellBook::forgetSpell(std::string const & spellName) {
    std::vector<ASpell*>::iterator ite = this->spellVec.end();
    for (std::vector<ASpell*>::iterator it = this->spellVec.begin(); it != ite; ++it) {
        if ((*it)->getName() == spellName) {
            delete *it;
            this->spellVec.erase(it);
        }
    }
}

ASpell* SpellBook::createSpell(std::string const & spellName) {
    std::vector<ASpell*>::iterator ite = this->spellVec.end();
    for (std::vector<ASpell*>::iterator it = this->spellVec.begin(); it != ite; ++it) {
        if ((*it)->getName() == spellName) {
            return (*it);
        }
    }
    return (nullptr);
}