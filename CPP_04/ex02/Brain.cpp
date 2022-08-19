#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "default idea";
	return;
}

Brain::Brain (const Brain & brain) {
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = brain._ideas[i];
	return;
}

Brain & Brain::operator=( const Brain & brain) {
	std::cout << "Brain assignment operator called" << std::endl;
	if (this != & brain) {
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = brain._ideas[i];
	}
	return *this;
}

Brain::~Brain( void ) {
	std::cout << "Brain destructor called" << std::endl;
	return;
}

const std::string & Brain::getIdea(int const index) const {
	return this->_ideas[index];
}

void Brain::setIdea(std::string const & idea, int index) {
	this->_ideas[index] = idea;
	return;
}

std::ostream & operator<<(std::ostream & o, Brain const & brain){
	for (int i = 0; i < 100; i++) {
		o << brain.getIdea(i) << " ";
	}
	return o;
}