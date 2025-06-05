
#include "FragTrap.hpp"


FragTrap::FragTrap(std::string name) : _name(name)
{
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 300;
	std::cout << DARK_RED <<"FragTrap created, their's name is " << YELLOW <<  _name << RESET << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << DARK_RED <<"FragTrap " <<YELLOW <<  _name << PINK << " destroid" << RESET << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << DARK_RED <<"FragTrap " << YELLOW <<_name << PINK << " Hey there! FragTrap is looking for a high five!" << RESET << std::endl;
}