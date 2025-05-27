
#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
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

// void ScavTrap::takeDamage(unsigned int amount)
// {
// 	if (_hit_points > 0)
// 	{
// 		_hit_points = _hit_points - amount;
// 		if (_hit_points > 0)
// 			std::cout << DARK_RED "ScavTrap " << YELLOW << _name << RED << " recibed damage " << YELLOW << amount << PINK ", the actual live is " << RED << _hit_points << PINK " points of live" << RESET << std::endl;
// 		else
// 			std::cout << DARK_RED "ScavTrap " << YELLOW << _name << RED << " are destroyed this turn" << std::endl;
// 	}
// 	else
// 		std::cout << DARK_RED "ScavTrap " << YELLOW << _name << RED << " are destroyed other turn" << PINK " this atack fail... " << std::endl;

// }

// void ScavTrap::beRepaired(unsigned int amount)
// {
// 	_energy_points --;
// 	if (_energy_points >= 0)
// 	{
// 		_hit_points = _hit_points + amount;
// 		std::cout << DARK_RED "ScavTrap " << GREEN << "restore " << amount << "healty points ." << PINK " ClapTrap have " << GREEN << _hit_points << PINK " point live " << std::endl;
// 	}
// 	else
// 		std::cout << YELLOW << _name << PINK << " Coudent"<< GREEN << " restore." <<PINK << "dont have energy" << RESET << std::endl;
// }

void ScavTrap::guardGate()
{
	std::cout << DARK_RED <<"ScavTrap " << YELLOW <<_name << PINK << " is now in Gate keeper mode." << RESET << std::endl;
}
