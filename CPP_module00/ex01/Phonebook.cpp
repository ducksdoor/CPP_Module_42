
#include "Phonebook.hpp"
#include <cstdlib>


Phonebook::Phonebook()
{
	currentindex = 0;
	Contact contacts[9];

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


bool Phonebook::get_valid_input(std::string& input)
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
		std::cout << "+------------------------------------------------+" << std::endl;
		std::cout << "+            ADD contact sucesfull:              *" << std::endl;
		std::cout << "+------------------------------------------------+" << std::endl;
		if (currentindex == 9)
			currentindex = 0;
	}
}

void	Phonebook::search()
{
	int	x;
	int max;
	int	n_input;
	std::string	input;

	x = 0;
	max = 0;
	std::cout << "+------------------------------------------------+" << std::endl;
	std::cout << "+   indice|      name|  lastname|  nickname|     +" << std::endl;
	while(x < 9)
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
		{
			x = 0;
			n_input = atoi(input.c_str());
			while (input[x] != '\0')
			{
				if (!std::isdigit(input[x]))
				{
					std::cout << "+               input invalid        +" << std::endl;
					n_input = -1;
					break;
				}
				x++;
			}
			if (n_input >= 0 && n_input <= 9)
			{
				if (contacts[n_input].name != "\0")
				{
					std::cout << "+ Name: " << contacts[n_input].name << std::endl;
					std::cout << "+ Lastname: " << contacts[n_input].lastname << std::endl;
					std::cout << "+ Nickname: " << contacts[n_input].nickname << std::endl;
					std::cout << "+ Phone number: " << contacts[n_input].phonenumber << std::endl;
					std::cout << "+ Secret: " << contacts[n_input].secret << std::endl;
				}
				else
					std::cout << "No exist the contact." << std::endl;
			}
			else
				std::cout << "Dont understand you.... " << std::endl;
		}
	}
}
