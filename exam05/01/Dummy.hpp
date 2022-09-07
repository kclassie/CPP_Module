#ifndef DUMMY_HPP
# define DUMMY_HPP
# include "ATarget.hpp"
# include "ASpell.hpp"

class Dummy : public ATarget {

public:
    Dummy();
    ~Dummy();

    virtual ATarget * clone() const;

};


#endif