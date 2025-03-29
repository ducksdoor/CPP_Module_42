#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
#include <vector>
# include "Contact.hpp" 

class Phonebook
{
	private:
		Contact contacts[8];
		int currentindex;

	public:
		Phonebook();
		virtual ~Phonebook();
		int		change_mode(std::string &input);
		void	mode_zero(const std::string &name);
		void	to_uppercase(std::string &str);
		void	search();
    //void	addContact(const Contact &contact);
    //	void searchContact(int index) const;
};

#endif
