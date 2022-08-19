#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {

private:
	std::string _ideas[100];

public:
	Brain( void );
	Brain (const Brain & );
	Brain & operator=( const Brain & );
	~Brain( void );

	const std::string & getIdea(int const index) const;
	void setIdea(std::string const & idea, int index);
};

std::ostream & operator<<(std::ostream & o, Brain const & brain);

#endif