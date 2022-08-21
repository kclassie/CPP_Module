#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# define HIGHEST_GRADE 1
# define  LOWEST_GRADE 150

# include <iostream>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat {

private:
	const std::string _name;
	int _grade;

public:
	Bureaucrat( void );
	Bureaucrat( std::string const & name, int grade );
	Bureaucrat( const Bureaucrat & );
	Bureaucrat & operator=( const Bureaucrat & );
	~Bureaucrat( void );

	std::string getName( void ) const;
	int getGrade( void ) const;
	void incrementGrade( int value );
	void decrementGrade( int value );
	void signForm( Form & form );
	void executeForm( Form const & form );

	class GradeTooHighException;
	class GradeTooLowException;
};

class Bureaucrat::GradeTooHighException : public std::exception {

public:
	virtual const char * what() const throw();
};

class Bureaucrat::GradeTooLowException : public std::exception {

public:
	virtual const char * what() const throw();
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & );

#endif