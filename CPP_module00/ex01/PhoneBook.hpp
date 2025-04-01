/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 13:53:43 by lortega-          #+#    #+#             */
/*   Updated: 2025/04/01 13:53:47 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <csignal>
# include "Contact.hpp" 

class PhoneBook
{
	private:
		int currentindex;
		Contact contacts[9];

	public:
		PhoneBook();
		int		change_mode(std::string &input);
		virtual ~PhoneBook();
		void	mode_zero(const std::string &name);
		void	to_uppercase(std::string &str);
		void	add_user();
		void	search();
		bool	get_valid_input(std::string& input);

};

#endif
