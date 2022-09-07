#include "Fwoosh.hpp"

Fwoosh::Fwoosh() {
    this->name = "Fwoosh";
    this->effects = "fwooshed";
}
Fwoosh::~Fwoosh() {}

ASpell * Fwoosh::clone() const {
    Fwoosh * newFwoosh = new Fwoosh();
    return newFwoosh;
}