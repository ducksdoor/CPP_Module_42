
#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << PINK <<"Basic CLapTrap created, their's name is " << YELLOW <<  _name << RESET << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << PINK <<"Basic CLapTrap " <<YELLOW <<  _name << PINK << " destroid" << RESET << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	_energy_points --;
	if (_energy_points >= 0)
		std::cout << PINK "ClapTrap " << YELLOW << _name << BLUE << " atacks " << YELLOW << target << PINK ", causing " << BLUE << _attack_damage << PINK " points of damage!" << RESET << std::endl;
	else
		std::cout << YELLOW << _name << PINK << " Coudent"<< RED << " atack." <<PINK << "dont have energy" << RESET << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_points > 0)
	{
		_hit_points = _hit_points - amount;
		if (_hit_points > 0)
			std::cout << PINK "ClapTrap " << YELLOW << _name << RED << " recibed damage " << YELLOW << amount << PINK ", the actual live is " << RED << _hit_points << PINK " points of live" << RESET << std::endl;
		else
			std::cout << PINK "ClapTrap " << YELLOW << _name << RED << " are destroyed this turn" << std::endl;
	}
	else
		std::cout << PINK "ClapTrap " << YELLOW << _name << RED << " are destroyed other turn" << PINK " this atack fail... " << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
	_energy_points --;
	if (_energy_points >= 0)
	{
		_hit_points = _hit_points + amount;
		std::cout << PINK "ClapTrap " << GREEN << "restore " << amount << "healty points ." << PINK " ClapTrap have " << GREEN << _hit_points << PINK " point live " << std::endl;
	}
	else
		std::cout << YELLOW << _name << PINK << " Coudent"<< GREEN << " restore." <<PINK << "dont have energy" << RESET << std::endl;
}
