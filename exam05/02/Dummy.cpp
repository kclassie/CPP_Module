#include "Dummy.hpp"

Dummy::Dummy() {
    this->type = "Target Practice Dummy";
}
Dummy::~Dummy() {}

ATarget * Dummy::clone() const {
    Dummy * newDummy = new Dummy();
    return newDummy;
}