
#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(std::string name) 
	: ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name)
{
	_energy_points = ScavTrap::_energy_points;
	_hit_points = FragTrap::_hit_points;
	_attack_damage = FragTrap::_attack_damage;
	std::cout << DARK_RED <<"DiamondTrap created, their's name is " << YELLOW <<  _name << RESET << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << DARK_RED <<"DiamondTrap " <<YELLOW <<  _name << PINK << " destroid" << RESET << std::endl;
}

void DiamondTrap::whoAmI()
	{
		std::cout << "DiamondTrap name: " << _name << "\n";
		std::cout << "ClapTrap name: " << ClapTrap::_name << "\n";
	}