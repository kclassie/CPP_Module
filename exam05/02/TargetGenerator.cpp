#include "TargetGenerator.hpp"


TargetGenerator::TargetGenerator() {}
TargetGenerator::~TargetGenerator( void ) {
    std::vector<ATarget*>::iterator ite = this->types.end();
    for (std::vector<ATarget*>::iterator it = this->types.begin(); it != ite; ++it)
        delete *it;
    this->types.clear();
}

void TargetGenerator::learnTargetType(ATarget* target) {
    if (target) {
        std::vector<ATarget*>::iterator ite = this->types.end();
        for (std::vector<ATarget*>::iterator it = this->types.begin(); it != ite; ++it)
            if ((*it)->getType() == target->getType())
                return ;
        this->types.push_back(target->clone());
    }
}

void TargetGenerator::forgetTargetType(std::string const & type) {
    std::vector<ATarget*>::iterator ite = this->types.end();
    for (std::vector<ATarget*>::iterator it = this->types.begin(); it != ite; ++it) {
        if ((*it)->getType() == type) {
            delete *it;
            it = this->types.erase(it);
        }
    }

}

ATarget* TargetGenerator::createTarget(std::string const & type) {
    std::vector<ATarget*>::iterator ite = this->types.end();
    for (std::vector<ATarget*>::iterator it = this->types.begin(); it != ite; ++it) {
        if ((*it)->getType() == type) {
            return (*it);
        }
    }
    return (nullptr);
}