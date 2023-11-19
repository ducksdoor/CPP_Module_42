
#include <iostream>

int main (int argc, char *argv[])
{
	int	x;
	int z;
	int color = 31;

	x = 0;
	z = 1;
	std::string	result;
	if (argc == 1)
	{
		std::cout << "\033[1;31m * LOUD AND UNBEARABLE FEEDBACK NOISE * \033[0m" << std::endl;
		return (0);
	}
	else
	{
		while(argv[z])
		{
			result = argv[z];
			while(result[x])
			{
				std::cout << "\033[1;" << color << "m" << char(toupper(result[x])) << "\033[0m";
				x++;
				color = (color % 7) + 31;
			}
			x = 0;
			z++;
		}
		std::cout << std::endl;
	}
	return (0);
}
