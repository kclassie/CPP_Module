#include "Polymorph.hpp"

Polymorph::Polymorph() {
    this->name = "Polymorph";
    this->effects = "turned into a critter";
}
Polymorph::~Polymorph() {}

ASpell * Polymorph::clone() const {
    Polymorph * newPolymorph = new Polymorph();
    return newPolymorph;
}