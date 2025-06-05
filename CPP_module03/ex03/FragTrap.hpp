
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#define RESET  "\033[0m"
#define PINK	"\033[0;35m"
#define YELLOW  "\033[0;93m"
#define GREEN   "\033[0;92m"
#define BLUE    "\033[0;94m"
#define RED    "\033[0;91m"
#define DARK_RED "\033[0;38;5;88m"

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	private:
		std::string _name;

	public:
    FragTrap(std::string name);
    ~FragTrap();
	void highFivesGuys(void);
};

#endif