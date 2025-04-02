
#include "Harl.hpp"

Harl::Harl () {}

Harl::~Harl () {}

void Harl::debug()
{
	std::cout << GREEN << "I love having extra bacon for my 7XL-double-cheese-triple"
				<< "-pickle-specialketchup burger. I really do!"<< RESET << std::endl;
}

void Harl::info()
{
	std::cout << BLUE << "I cannot believe adding extra bacon costs more money. You didn’t put"
				<< "enough bacon in my burger! If you did, I wouldn’t be asking for more!"<< RESET << std::endl;
}

void Harl::warning()
{
	std::cout << YELLOW << "I think I deserve to have some extra bacon for free. I’ve been coming for"
				<< "years, whereas you started working here just last month" << RESET<< std::endl;
}

void Harl::error()
{
	std::cout << RED <<"This is unacceptable! I want to speak to the manager now." << RESET << std::endl;
}

void Harl::complain(std::string level)
{
	void	(Harl::*ptr_complain[4])(void) =  
	{&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	std::string levels[4] = {"debug", "info", "warning", "error"};

	int x = 0;
	while (x < 4)
	{
		if (level == levels[x])
		{
			(this->*ptr_complain[x])();
			break;
		}
		x++;
	}

}
