#include "Harl.hpp"

Harl::Harl(void)
{}

Harl::~Harl(void)
{}

void Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*funct[4])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	void (Harl::*tmp_funct)(void);
	int i = 0;
	while((levels[i] != level) && i < 4)
		i++;
	if (i == 4) {
		std::cerr << "Error: wrong level." << std::endl;
	}
	else {
		tmp_funct = funct[i];
		(this->*tmp_funct)();
	}
}

void Harl::_debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup " <<
			  "burger. I really do!"
		<< std::endl;
}

void Harl::_warning(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put" <<
				 "enough bacon in my burger! If you did, I wouldn’t be asking for more!"
			  << std::endl;
}

void Harl::_info(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for" <<
				 "years whereas you started working here since last month."
			  << std::endl;
}

void Harl::_error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
			  << std::endl;
}

