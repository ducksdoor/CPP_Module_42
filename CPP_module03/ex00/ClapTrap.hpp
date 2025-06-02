
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#define RESET  "\033[0m"
#define PINK	"\033[0;35m"
#define YELLOW  "\033[0;93m"
#define GREEN   "\033[0;92m"
#define BLUE    "\033[0;94m"
#define RED    "\033[0;91m"
#include <iostream>

class ClapTrap
{
	private:
		std::string _name;
		int			_hit_points;
		int			_energy_points;
		int			_attack_damage;

	public:
	
	//canonical form 
	ClapTrap();
	ClapTrap(const ClapTrap& other);
    ClapTrap& operator=(const ClapTrap& other); 
	~ClapTrap();


    ClapTrap(std::string name);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};

#endif