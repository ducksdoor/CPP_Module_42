
#include "Phonebook.hpp"
#include "Contact.hpp"

Phonebook::Phonebook()
{
	int x;

	x = 0;
	while (x < 8)
	{
		Contact Contact(x);
		x++;
	}
	currentindex = 0;
}

Phonebook::~Phonebook()
{
}

void	Phonebook::to_uppercase(std::string &str)
{
	size_t i = 0;
	while (i < str.length())
	{
		str[i] = std::toupper(static_cast<unsigned char>(str[i]));
		++i;
	}
}

int	Phonebook::change_mode(std::string &input)
{
	to_uppercase(input);
	if (input == "ADD" || input == "1")
		return (1);
	if (input == "SEARCH" || input == "2")
		return (2);
	return (0);
}

void Phonebook::mode_zero(const std::string &name)
{
    std::cout << "+-------------------------------+" << std::endl;
    std::cout << "        Welcome, " << name << "!        " << std::endl;
    std::cout << "| You can choose between modes:  |" << std::endl;
    std::cout << "| 1. ADD other contact.          |" << std::endl;
    std::cout << "| 2. SEARCH contact.             |" << std::endl;
    std::cout << "| 3. EXIT the program.           |" << std::endl;
    std::cout << "+--------------------------------+" << std::endl;
}

void	Phonebook::search()
{
	int	x;

	x = 0;
	while(x < 8)
	{
		contacts[x].little_see();
		x++;
	} 	
}
