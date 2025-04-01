
#include "Zombie.hpp"

Zombie::Zombie(std::string strname)
{
	this->name = strname;
}

Zombie::~Zombie()
{
	std::cout << "\033[34m" << this->name << "\033[0m" << ": "
	<< "\033[90mdead\033[0m" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << "\033[34m" << this->name << "\033[0m" << ": "
	<< "\033[90mBraiiiiiiinnnzzzZ...\033[0m" << std::endl;
}

int main (void)
{
	Zombie* zombie = Zombie::newZombie("patata");
	Zombie zombie2 = Zombie("berenjena");

	zombie->announce();
	zombie2.announce();

	zombie->~Zombie();
	zombie2.~Zombie();
}
