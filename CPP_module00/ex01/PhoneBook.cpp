
#include "phonebook.h"

void PhoneBook::addContact()
{
	if (num_contacts < MAX_CONTACTS)
	{
		Contact newContact("", "", "", "");
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::cout << "Enter the contact details:" ;

		while (newContact.name.empty() || std::all_of(newContact.name.begin(), newContact.name.end(), ::isspace))
		{
			std::cout << "Name: " << std::endl;
			std::getline(std::cin, newContact.name);
		}

		while (newContact.last_name.empty() || std::all_of(newContact.name.begin(), newContact.name.end(), ::isspace))
		{
			std::cout << "Last Name: "<< std::endl;
			std::getline(std::cin, newContact.last_name);
		}

		while (newContact.nickname.empty() || std::all_of(newContact.name.begin(), newContact.name.end(), ::isspace))
		{
			std::cout << "Nickname: "<< std::endl;
			std::getline(std::cin, newContact.nickname);
		}

		while (newContact.secret.empty() || std::all_of(newContact.name.begin(), newContact.name.end(), ::isspace))
		{
			std::cout << "Secret: "<< std::endl;
			std::getline(std::cin, newContact.secret);
		}

		contacts[num_contacts++] = newContact;
		std::cout << "\033[0;92mContact added successfully.\033[0m" << std::endl;
	} 
	else
		std::cout << "Phonebook is full. Cannot add more contacts." << std::endl;
}

std::string	format(std::string text)
{
	std::string	result;
	std::size_t lon = text.size();

	if (lon == 10)
		return (text);
	if ( lon < 10)
		return(text.append(10 - lon, ' '));
	result = text.substr(0, 9);
	return(result.append(1, '.'));
}

void	PhoneBook::displayContacts()
{
	std::string cut;
	std::string yesorno;

	cut = "|----------|----------|----------|----------|";
	if (num_contacts == 0)
		std::cout << "Phonebook is empty." << std::endl;
	else
	{
		std::cout << "Phonebook Contacts:" << std::endl;
		
		int i = 0;
		head();
		while (i < num_contacts) 
		{
			std::cout << "|    "<< i + 1<< "     |";
			std::cout << format(contacts[i].name) << "|" ;
			std::cout << format(contacts[i].last_name) << "|";
			std::cout << format(contacts[i].nickname) << "|" << std::endl;
			//std::cout << "Secret: " << contacts[i].secret << std::endl;
			std::cout << cut << std::endl;

			++i;
		}
		while (1)
		{
			std::cout << "Do you want to see any more in detail? [1 -> YES] [2 -> NO]" << std::endl;
			std::cin >> yesorno;
			if (yesorno == "1")
			{
				std::cout << "Who number os contacts?" << std::endl;
				std::cin >> yesorno;
				std::cout << "En construcción" << std::endl;
			}
			if (yesorno == "2")
				break;
			else
				std::cout << "PLEASE! use number" << std::endl;
		}

	}
}


