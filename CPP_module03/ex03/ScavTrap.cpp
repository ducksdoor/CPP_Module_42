
#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string name) :  _name(name)
{
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	std::cout << DARK_RED <<"ScavTrap created, their's name is " << YELLOW <<  _name << RESET << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << DARK_RED <<"ScavTrap " <<YELLOW <<  _name << PINK << " destroid" << RESET << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	_energy_points --;
	if (_energy_points >= 0)
		std::cout << DARK_RED "ScavTrap " << YELLOW << _name << BLUE << " atacks " << YELLOW << target << PINK ", causing " << BLUE << _attack_damage << PINK " points of damage!" << RESET << std::endl;
	else
		std::cout << YELLOW << _name << PINK << " Coudent"<< RED << " atack." <<PINK << "dont have energy" << RESET << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << DARK_RED <<"ScavTrap " << YELLOW <<_name << PINK << " is now in Gate keeper mode." << RESET << std::endl;
}
