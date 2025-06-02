
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main (void)
{
	std::cout << "std creator" << std::endl;
	ClapTrap clap = ClapTrap("patata");

	std::cout <<std::endl << "new creator" << std::endl;
	ScavTrap clapy = ScavTrap("pepinillo");

	std::cout <<std::endl << "ft GuardGate " << std::endl;
	clapy.guardGate();
	
	std::cout <<std::endl << "others ft  " << std::endl;
	clapy.takeDamage(6);
	clapy.attack("your face");
	clapy.beRepaired(2);

	std::cout <<std::endl << "destructor " << std::endl;


}
