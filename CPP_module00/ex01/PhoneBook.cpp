
#include "phonebook.h"

void PhoneBook::addContact()
{
	if (num_contacts < MAX_CONTACTS)
	{
		Contact newContact;
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
		std::cout << "Contact added successfully." << std::endl;
	} 
	else
		std::cout << "Phonebook is full. Cannot add more contacts." << std::endl;
}

void PhoneBook::displayContacts()
{
	if (num_contacts == 0)
		std::cout << "Phonebook is empty." << std::endl;
	else
	{
		std::cout << "Phonebook Contacts:" << std::endl;
		
		int i = 0;
		while (i < num_contacts) 
		{
			std::cout << "Contact " << i + 1 << ":" << std::endl;
			std::cout << "Name: " << contacts[i].name << std::endl;
			std::cout << "Last Name: " << contacts[i].last_name << std::endl;
			std::cout << "Nickname: " << contacts[i].nickname << std::endl;
			std::cout << "Secret: " << contacts[i].secret << std::endl;
			std::cout << "------------------------" << std::endl;

			++i;
		}
	}
}
