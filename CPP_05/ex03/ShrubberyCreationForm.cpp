#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : Form("Default ShrubberyCreationForm", 145, 137) {
	this->_target = "Default target";
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : Form ("ShrubberyCreationForm", 145, 137) {
	this->_target = target;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & ref ) : Form ("ShrubberyCreationForm", 145, 137) {
	this->_target = ref._target;
	return;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( const ShrubberyCreationForm & ref ) {
	this->_target = ref._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {
	return;
}

void ShrubberyCreationForm::formAction( void ) const {
	std::ofstream fout (this->_target + "_shrubbery");
	if (!fout)
	{
		std::cerr << "Error: " << this->_target + "_shrubbery"
				  << "cannot be opened for writing!" << std::endl;
		exit(1);
	}
	fout << "   *    *  ()   *   * " << std::endl;
	fout << "*        * /\\         *" << std::endl;
	fout << "      *   /i\\\\    *  *" << std::endl;
	fout << "    *     o/\\\\  *      *" << std::endl;
	fout << " *       ///\\i\\    *" << std::endl;
	fout << "     *   /*/o\\\\  *    *" << std::endl;
	fout << "   *    /i//\\*\\      *" << std::endl;
	fout << "        /o/*\\\\i\\   *" << std::endl;
	fout << "  *    //i//o\\\\\\\\     *" << std::endl;
	fout << "    * /*////\\\\\\\\i\\*" << std::endl;
	fout << " *    //o//i\\\\*\\\\\\   *" << std::endl;
	fout << "   * /i///*/\\\\\\\\\\o\\   *" << std::endl;
	fout << "  *    *   ||     * " << std::endl;
	return;
}