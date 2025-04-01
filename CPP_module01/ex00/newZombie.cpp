
#include "Zombie.hpp"

Zombie*	Zombie::newZombie(std::string strname)
{
	return new Zombie(strname);
}
