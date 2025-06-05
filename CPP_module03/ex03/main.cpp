
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main (void)
{
	std::cout <<std::endl << "new creator" << std::endl;
	DiamondTrap Fragy = DiamondTrap("Fragy");

	std::cout <<std::endl << "ft Diamond " << std::endl;
	Fragy.whoAmI();
	
	std::cout <<std::endl << "others ft  " << std::endl;
	Fragy.takeDamage(6);
	Fragy.attack("your face");
	Fragy.beRepaired(2);

	std::cout <<std::endl << "destructor " << std::endl;


}
