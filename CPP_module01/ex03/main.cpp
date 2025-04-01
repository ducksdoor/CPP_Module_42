/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 13:56:17 by lortega-          #+#    #+#             */
/*   Updated: 2025/04/01 13:56:19 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main (void)
{
	std::cout << std::endl << "\033[32mWelcome to the resistance.\033[0m" << std::endl;
	std::cout << "\033[32m Human always armed, practicing. \033[0m" << std::endl << std::endl;
	Weapon club = Weapon("crude spiked club");
	HumanA bob ("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	std::cout<< std::endl << "\033[32m Human, sometimes armed, practicing.\033[0m" << std::endl << std::endl;

	HumanB jim("Jim");
	jim.attack();
	jim.setWeapon(club);
	jim.attack();
	club.setType("Fire gun");
	jim.attack();
	std::cout << std::endl << "\033[32m Humans ready for fight. \033[0m" << std::endl << std::endl;
}
