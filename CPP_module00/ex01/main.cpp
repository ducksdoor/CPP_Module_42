
#include "Phonebook.hpp"

int main(void)
{
	Phonebook phonebook;
	std::string	input;
	int			mode;
	std::string	name;

	name = "User";
	mode = 0;
	while (true)
	{
		if (mode == 1)
		{
			std::cout << "modo 1 NO IMPLEMENTADO" << std::endl;
			mode = 0;
		}	
		if (mode == 2)
		{
			phonebook.search();
			std::cout << "modo 2 NO IMPLEMENTADO" << std::endl;
			mode = 0;
		}	
		if (mode == 0)
			phonebook.mode_zero(name);
		std::getline(std::cin, input);
		mode = phonebook.change_mode(input);
		if (input == "EXIT" || input == "3")
		{
			std::cout << "		so, sad...but goodbye" << std::endl;
			break;
		}
	}
	return 0;
}
