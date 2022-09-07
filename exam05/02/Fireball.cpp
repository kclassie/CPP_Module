#include "Fireball.hpp"

Fireball::Fireball() {
    this->name = "Fireball";
    this->effects = "burnt to a crisp";
}
Fireball::~Fireball() {}

ASpell * Fireball::clone() const {
    Fireball * newFireball = new Fireball();
    return newFireball;
}