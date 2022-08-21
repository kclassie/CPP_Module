#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"


class Bureaucrat;

class Form {

private:
	const std::string _name;
	bool _isSigned;
	const int _signGrade;
	const int _executeGrade;

public:
	Form( void );
	Form( std::string name, int signGrade, int executeGrade );
	Form( const Form & );
	Form & operator=( const Form & );
	~Form( void );

	void beSigned(Bureaucrat & bureaucrat );
	std::string getName( void ) const;
	int getSignGrade( void ) const;
	int getExecuteGrade( void ) const;
	bool getStatus( void ) const;
	void setStatus( bool status );
	void execute(Bureaucrat const & executor) const;
	virtual void formAction( void ) const = 0;

	class GradeTooHighException;
	class GradeTooLowException;
	class FormNotSignedException;

};

std::ostream & operator<<( std::ostream & o, Form const & );

class Form::GradeTooHighException : public std::exception {

public:
	virtual const char * what() const throw();
};

class Form::GradeTooLowException : public std::exception {

public:
	virtual const char * what() const throw();
};

class Form::FormNotSignedException : public std::exception {

public:
	virtual const char * what() const throw();
};

#endif