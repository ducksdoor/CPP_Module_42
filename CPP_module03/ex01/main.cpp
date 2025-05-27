
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main (void)
{
	ClapTrap clap = ClapTrap("patata");
	ScavTrap clapy = ScavTrap("pepinillo");

	clapy.guardGate();
	
	clapy.takeDamage(6);
	clapy.attack("your face");
	clapy.beRepaired(2);

	// clap.attack("your face");
	// clap.attack("your face");
	// clap.attack("your face");
	// clap.attack("your face");
	// clap.attack("your face");
	// clap.attack("your face");
	// clap.attack("your face");
	// clap.attack("your face");
	// clap.beRepaired(2);
	// clap.attack("your face");
	// clap.beRepaired(2);
	// clap.attack("your face");
	// clap.takeDamage(10);
	// clap.takeDamage(6);

}
