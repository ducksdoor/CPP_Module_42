#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <csignal>
# include "Contact.hpp" 

class Phonebook
{
	private:
		int currentindex;
		Contact contacts[9];

	public:
		Phonebook();
		int		change_mode(std::string &input);
		virtual ~Phonebook();
		void	mode_zero(const std::string &name);
		void	to_uppercase(std::string &str);
		void	add_user();
		void	search();
		bool	get_valid_input(std::string& input);

};

#endif
