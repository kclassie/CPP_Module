#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form {

private:
	std::string _target;

public:
	PresidentialPardonForm( void );
	PresidentialPardonForm( std::string target );
	PresidentialPardonForm( const PresidentialPardonForm & );
	PresidentialPardonForm & operator=( const PresidentialPardonForm & );
	~PresidentialPardonForm( void );

	void formAction( void ) const;
};

#endif