#include "ASpell.hpp"

ASpell::ASpell() : name(), effects()  {}

ASpell::ASpell(ASpell const & ref) : name(ref.name), effects(ref.effects) {}


ASpell & ASpell::operator=(ASpell const & ref) {
    this->name = ref.name;
    this->effects = ref.effects;
    return *this;
}

ASpell::ASpell(std::string name, std::string effects) {
	this->name = name;
	this->effects = effects;
}

ASpell::~ASpell() {}

std::string ASpell::getName() const {
	return this->name;
}
std::string ASpell::getEffects() const {
	return this->effects;
}

void ASpell::launch(const ATarget & ref) const {
	ref.getHitBySpell(*this);
}

