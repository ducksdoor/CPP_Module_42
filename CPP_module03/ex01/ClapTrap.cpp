
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_energy = 10;
	_atack_damage = 0;
	_hit_point = 10;
	std::cout << PINK <<"Basic CLapTrap created, their's name is " << YELLOW <<  _name << RESET << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << PINK <<"Basic CLapTrap " <<YELLOW <<  _name << PINK << " destroid" << RESET << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	_energy --;
	if (_energy >= 0)
		std::cout << PINK "ClapTrap " << YELLOW << _name << BLUE << " atacks " << YELLOW << target << PINK ", causing " << BLUE << _atack_damage << PINK " points of damage!" << RESET << std::endl;
	else
		std::cout << YELLOW << _name << PINK << " Coudent"<< RED << " atack." <<PINK << "dont have energy" << RESET << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_point > 0)
	{
		_hit_point = _hit_point - amount;
		if (_hit_point > 0)
			std::cout << PINK "ClapTrap " << YELLOW << _name << RED << " recibed damage " << YELLOW << amount << PINK ", the actual live is " << RED << _hit_point << PINK " points of live" << RESET << std::endl;
		else
			std::cout << PINK "ClapTrap " << YELLOW << _name << RED << " are destroyed this turn" << std::endl;
	}
	else
		std::cout << PINK "ClapTrap " << YELLOW << _name << RED << " are destroyed other turn" << PINK " this atack fail... " << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
	_energy --;
	if (_energy >= 0)
	{
		_hit_point = _hit_point + amount;
		std::cout << PINK "ClapTrap " << GREEN << "restore " << amount << "healty points ." << PINK " ClapTrap have " << GREEN << _hit_point << PINK " point live " << std::endl;
	}
	else
		std::cout << YELLOW << _name << PINK << " Coudent"<< GREEN << " restore." <<PINK << "dont have energy" << RESET << std::endl;
}
