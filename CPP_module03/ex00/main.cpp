
#include "ClapTrap.hpp"

int main (void)
{
	ClapTrap clap =ClapTrap("patata");
	clap.takeDamage(6);
	clap.attack("your face");
	clap.beRepaired(2);
	clap.attack("your face");
	clap.attack("your face");
	clap.attack("your face");
	clap.attack("your face");
	clap.attack("your face");
	clap.attack("your face");
	clap.attack("your face");
	clap.attack("your face");
	clap.beRepaired(2);
	clap.attack("your face");
	clap.beRepaired(2);
	clap.attack("your face");
	clap.takeDamage(10);
	clap.takeDamage(6);

}