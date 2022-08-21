#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form {

private:
	std::string _target;

public:
	ShrubberyCreationForm( void );
	ShrubberyCreationForm( std::string target );
	ShrubberyCreationForm( const ShrubberyCreationForm & );
	ShrubberyCreationForm & operator=( const ShrubberyCreationForm & );
	~ShrubberyCreationForm( void );

	void formAction( void ) const;
};

#endif