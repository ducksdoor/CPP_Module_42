
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main (void)
{
	std::cout << "std creator" << std::endl;
	ClapTrap clap = ClapTrap("patata");

	std::cout <<std::endl << "new creator" << std::endl;
	FragTrap Fragy = FragTrap("Fragy");

	std::cout <<std::endl << "ft HighFiveGuys " << std::endl;
	Fragy.highFivesGuys();
	
	std::cout <<std::endl << "others ft  " << std::endl;
	Fragy.takeDamage(6);
	Fragy.attack("your face");
	Fragy.beRepaired(2);

	std::cout <<std::endl << "destructor " << std::endl;


}
