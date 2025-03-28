#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include <iostream>
# include <string>

class Contact
{
public:
	std::string	name;
	std::string	last_name;
	std::string	nickname;
	std::string	secret;

	Contact(const std::string& n = "", const std::string& ln = "", const std::string& nn = "", const std::string& s = "")
		: name(n), last_name(ln), nickname(nn), secret(s) {}
};

class PhoneBook
{
private:
	static const int MAX_CONTACTS = 8;
	Contact contacts[MAX_CONTACTS];
	int num_contacts;

public:
	PhoneBook() : num_contacts(0)
	{
		int i = 0;
		while (i < MAX_CONTACTS)
		{
			contacts[i] = Contact("", "", "", "");
			++i;
		}
	}
	void addContact();
	void displayContacts();
};

void head();

#endif
