
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#define RESET  "\033[0m"
#define PINK	"\033[0;35m"
#define YELLOW  "\033[0;93m"
#define GREEN   "\033[0;92m"
#define BLUE    "\033[0;94m"
#define RED    "\033[0;91m"
#include <iostream>

class ScavTrap
{
	private:
		std::string _name;
		int			_hit_point;
		int			_energy;
		int			_atack_damage;

	public:
    ScavTrap(std::string name);
    ~ScavTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
    void guardGate();
};

#endif