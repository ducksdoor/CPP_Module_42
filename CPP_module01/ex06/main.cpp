
#include "Harl.hpp"

int main (int argc, char **argv)
{
	Harl h;
	size_t x;
	if (argc == 1)
	{
		std::cout << std::endl << "..." << std::endl << std::endl;
		return 0;
	}
	else if (argc > 2)
	{
		std::cout << std::endl << "excesive arg" << std::endl << std::endl;
		return 0;
	}
	else
	{
		std::string level = argv[1];
		x = 0;
		while(x < level.length())
		{
			level[x] = std::tolower(level[x]);
			x++;
		}
		h.complain(level);
	}
	return 0;
}
