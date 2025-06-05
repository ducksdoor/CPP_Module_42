
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#define RESET  "\033[0m"
#define PINK	"\033[0;35m"
#define YELLOW  "\033[0;93m"
#define GREEN   "\033[0;92m"
#define BLUE    "\033[0;94m"
#define RED    "\033[0;91m"
#define DARK_RED "\033[0;38;5;88m"

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	private:
        std::string _name;

	public:
    ScavTrap(std::string name);
    ~ScavTrap();
	void attack(const std::string& target);

    void guardGate();
};

#endif