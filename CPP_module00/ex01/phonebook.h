#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include <iostream>
# include <string>

class PhoneBook
{
	private:
		struct Contact
		{
			std::string	name;
			std::string	last_name;
			std::string	nickname;
			std::string	secret;
		};

	static const int	MAX_CONTACTS = 8;
	Contact contacts[MAX_CONTACTS];
	int					num_contacts;

	public:
		PhoneBook() : num_contacts(0){}

		void addContact();
		void displayContacts();
};

#endif
