#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie(std::string strname);
		~Zombie();

		static Zombie *newZombie(std::string strname);
		void announce(void);
//		void randomChump(std::string name);
};

#endif
