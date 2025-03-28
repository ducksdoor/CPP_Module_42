
#include "Phonebook.hpp"

int main()
{
	std::string input;
	while (true)
	{
		std::cout << "Sigo aquí" << std::endl;
		std::getline(std::cin, input);
		if (input == "salir")
			break;
	}
	return 0;
}