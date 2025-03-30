
#include "Phonebook.hpp"



Phonebook::Phonebook()
{
	currentindex = 0;
	int x;

	x = 0;
	while (x < 9)
	{
		Contact contacts[x];
		x++;
	}
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
	std::cout << "+------------------------------------------------+" << std::endl;
	std::cout << "               Welcome, " << name << "!        " << std::endl;
	std::cout << "|         You can choose between modes:          |" << std::endl;
	std::cout << "|         1. ADD other contact.                  |" << std::endl;
	std::cout << "|         2. SEARCH contact.                     |" << std::endl;
	std::cout << "|         3. EXIT the program.                   |" << std::endl;
	std::cout << "+------------------------------------------------+" << std::endl;
}


bool get_valid_input(std::string& input)
{
	std::getline(std::cin, input);
	if (input.empty())
	{
		std::cout << "Invalid input, please enter a value: ";
		return false;
	}
    return true;
}


void	Phonebook::add_user()
{
	if (currentindex < 9)
	{
		contacts[currentindex].index = currentindex;
		std::cout << "Enter name: ";
		while (!get_valid_input(contacts[currentindex].name)) {}
		std::cout << "Enter lastname: ";
		while (!get_valid_input(contacts[currentindex].lastname)) {}
		std::cout << "Enter nickname: ";
		while (!get_valid_input(contacts[currentindex].nickname)) {}
		std::cout << "Enter phone number: ";
		while (!get_valid_input(contacts[currentindex].phonenumber)) {}
		std::cout << "Enter secret: ";
        while (!get_valid_input(contacts[currentindex].secret)) {}
		currentindex++;
	}
	else 
		std::cout << "aun no esta programada la reasignacion... " << std::endl;

}

void	Phonebook::search()
{
	int	x;
	int max;
	std::string	input;

	x = 0;
	max = 0;
	std::cout << "+------------------------------------------------+" << std::endl;
	std::cout << "+   indice|      name|  lastname|  nickname|     +" << std::endl;
	while(x < 8)
	{
		if (contacts[x].name != "")
			contacts[x].little_see();
		x++;
		max++;
	}
	std::cout << "+------------------------------------------------+" << std::endl;
	while(true)
	{
		std::cout << std::endl << "+------------------------------------------------+" << std::endl;
		std::cout << "|     Select contact [0-8] or go back [9]        |" << std::endl;
		std::cout << "+------------------------------------------------+" << std::endl;
		std::getline(std::cin, input);
		if (input == "9")
			break;
		else
			std::cout << "aun no esta programada la busqueda espedifica " << std::endl;
	}
}
