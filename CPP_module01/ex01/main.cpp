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

#include "Zombie.hpp"

int main (void)
{
	int	x;
	x = 0;
	std::cout << "\033[32m  welcome to the garden! \033[0m" << std::endl;
	Zombie* horde = Zombie::zombieHorde(5, "BAby");
	while (x <= 5)
	{
		horde[x].announce();
		x++;
	}
	delete[] horde;
	
	Zombie* campus = Zombie::zombieHorde(5, "Piscin");
	x = 0;
	while (x <= 5)
	{
		if (x == 3)
			campus[x].setName("Sempai");
		campus[x].announce();
		x++;
	}
	delete[] campus;
}
