#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP
# include <iostream>
# include <vector>
# include "ATarget.hpp"

class ATarget;

class TargetGenerator {

private:
    std::vector<ATarget*> types;
    TargetGenerator (TargetGenerator const & );
    TargetGenerator operator=(TargetGenerator const & );

public:
    TargetGenerator();
    virtual ~TargetGenerator ( void );
    void learnTargetType(ATarget*);
    void forgetTargetType(std::string const &);
    ATarget* createTarget(std::string const &);

};

#endif