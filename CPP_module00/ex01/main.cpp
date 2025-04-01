/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 13:53:24 by lortega-          #+#    #+#             */
/*   Updated: 2025/04/01 13:53:26 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"

static void ignore_signal(int signal)
{
	(void)signal;
	std::cout << std::endl  << "SIGINT recibed(Ctrl+C)...   ok..." << std::endl;
}

int main(void)
{
	signal(SIGINT, ignore_signal);
	PhoneBook phonebook;
	std::string	input;
	int			mode;
	std::string	name;

	name = "User";
	mode = 0;
	while (true)
	{
		phonebook.mode_zero(name);
		std::getline(std::cin, input);
		if (input == "EXIT" || input == "3")
		{
			std::cout << "		so, sad...but goodbye" << std::endl;
			break;
		}
		mode = phonebook.change_mode(input);
		if (mode == 1)
		{
			phonebook.add_user();
			std::cout << std::endl;
			mode = 0;
		}
		else if (mode == 2)
		{
			phonebook.search();
			std::cout << std::endl;
			mode = 0;
		}
	}
	return 0;
}
