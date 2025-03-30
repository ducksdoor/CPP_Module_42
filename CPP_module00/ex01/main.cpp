
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
		phonebook.mode_zero(name);
		std::getline(std::cin, input);
		if (input == "EXIT" || input == "3")
		{
			std::cout << "		so, sad...but goodbye" << std::endl;
			break;
		}
		mode = phonebook.change_mode(input);
		if (mode == 1)
		{
			phonebook.add_user();
			std::cout << std::endl;
			mode = 0;
		}
		else if (mode == 2)
		{
			phonebook.search();
			std::cout << std::endl;
			mode = 0;
		}
	}
	return 0;
}
