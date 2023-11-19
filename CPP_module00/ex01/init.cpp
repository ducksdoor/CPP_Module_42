
/* to do: 

falta borrar el primero cuando hay 8
que no se pueda quedar un campo vacio
*/

#include "phonebook.h"

std::string to_upper(std::string answerd)
{
	int			x;
	std::string	result;

	x = 0;
	while(answerd[x])
	{
		result += toupper(answerd[x]);
		x++;
	}
	return (result);
}

std::string menu(std::string answerd)
{
	std::cout << "What do you want to do? [ADD / 1], [SEARCH / 2], [EXIT / 3]" << std::endl;
	std::cin >> answerd;
	answerd = to_upper(answerd);
	return (answerd);
}

void head()
{
	std::cout << "\033[0;94m ___________________________________________\033[0m" << std::endl;
	std::cout << "\033[0;94m|               \033[0;93mold Phonebook\033[0m               \033[0;94m|\033[0m" << std::endl;
	std::cout << "\033[0;94m|___________________________________________|\033[0m" << std::endl;
	std::cout << "\033[0;94m|  \033[0;93mIndex   \033[0;94m|   \033[0;93mName   |\033[0;93mLast Name |  \033[0;93mapodo   \033[0;94m|" << std::endl;
	std::cout << "\033[0;94m|__________|__________|__________|__________|\033[0m" << std::endl;
}


int main ()
{
	std::string	answerd;
	PhoneBook	myPhoneBook;

	while (1)
	{
		head();
		std::cout << "What do you want to do? [ADD/1], [SEARCH/2], [EXIT/3]" << std::endl;
		std::cin >> answerd;
		answerd = to_upper(answerd);
		while (1)
		{
			if (answerd == "ADD" || answerd == "1")
			{
				myPhoneBook.addContact();
				answerd = menu(answerd);
			}
			else if (answerd == "SEARCH" || answerd == "2")
			{
				myPhoneBook.displayContacts();
				answerd = menu(answerd);
			}
			else if (answerd == "EXIT" || answerd == "3")
			{
				std::cout << "──────▄▄▄ "<< std::endl;
				std::cout << "────▄▀░▄░▀▄ "<< std::endl;
				std::cout << "────█░█▄▀░█ "<< std::endl;
				std::cout << "────█░▀▄▄▀█▄█▄▀ "<< std::endl;
				std::cout << "───▄▄█▄▄▄▄███▀     bye, bye!" << std::endl;
				break;
			}
			else
			{
				std::cout << "I dont understand you" << std::endl;
				answerd = menu(answerd);
			}
		}
		exit(1);
	}
}

