#include "Warlock.hpp"

Warlock::Warlock (std::string const &name, std::string const &title) {
	this->name = name;
	this->title = title;
	std::cout << this->name << ": This looks like another boring day." << std::endl;
	return;
}

Warlock::~Warlock ( void ) {
	std::cout << this->name << ": My job here is done!" << std::endl;
	return;
}

std::string const &Warlock::getName( void ) const {
	return this->name;
}

std::string const &Warlock::getTitle( void ) const {
	return this->title;
}

void Warlock::setTitle( const std::string & title) {
	this->title = title;
	return;
}

void Warlock::introduce() const {
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
	return;
}

void Warlock::learnSpell(ASpell * spell) {
    if (spell) {
        std::vector<ASpell*>::iterator ite = this->spellVec.end();
        for (std::vector<ASpell*>::iterator it = this->spellVec.begin(); it != ite; ++it)
            if ((*it)->getName() == spell->getName())
                return ;
        this->spellVec.push_back(spell->clone());
    }
}

void Warlock::forgetSpell(std::string const &spellName) {
    std::vector<ASpell*>::iterator ite = this->spellVec.end();
    for (std::vector<ASpell*>::iterator it = this->spellVec.begin(); it != ite; ++it) {
        if ((*it)->getName() == spellName) {
            delete *it;
            this->spellVec.erase(it);
        }
    }

}
void Warlock::launchSpell(std::string const &spellName, ATarget const & target) {
    std::vector<ASpell*>::iterator ite = this->spellVec.end();
    for (std::vector<ASpell*>::iterator it = this->spellVec.begin(); it != ite; ++it) {
        if ((*it)->getName() == spellName) {
            (*it)->launch(target);
            return ;
        }
    }
}