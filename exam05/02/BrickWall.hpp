#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP
# include "ATarget.hpp"
# include "ASpell.hpp"

class BrickWall : public ATarget {

public:
    BrickWall();
    ~BrickWall();

    virtual ATarget * clone() const;

};


#endif