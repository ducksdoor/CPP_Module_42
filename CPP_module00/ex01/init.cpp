
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

int main ()
{
	std::string	answerd;
	PhoneBook	myPhoneBook;

	while (1)
	{

		std::cout << " _____________________________________________" << std::endl;
		std::cout << "|                old Phonebook                |" << std::endl;
		std::cout << "|_____________________________________________|" << std::endl;
		std::cout << "|  Index   |    Name    | Last Name|  apodo   |" << std::endl;
		std::cout << "|__________|____________|__________|__________|" << std::endl;
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
				std::cout << "bye, bye!" << std::endl;
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

