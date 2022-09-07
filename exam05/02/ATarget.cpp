#include "ATarget.hpp"

ATarget::ATarget() : type() {}

ATarget::ATarget(ATarget const & ref) : type(ref.type) {}


ATarget & ATarget::operator=(ATarget const & ref) {
    this->type = ref.type;
    return *this;
}

ATarget::ATarget(std::string type) {
	this->type = type;
}

ATarget::~ATarget() {}

std::string const &ATarget::getType() const {
	return this->type;
}

void ATarget::getHitBySpell(const ASpell & ref) const {
	std::cout << this->type << " has been " << ref.getEffects() << std::endl;
}