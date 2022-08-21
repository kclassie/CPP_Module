#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form {

private:
	std::string _target;

public:
	RobotomyRequestForm( void );
	RobotomyRequestForm( std::string target );
	RobotomyRequestForm( const RobotomyRequestForm & );
	RobotomyRequestForm & operator=( const RobotomyRequestForm & );
	~RobotomyRequestForm( void );

	void formAction( void ) const;
};

#endif