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
	std::cout << "\033[32m  welcome to the garden! \033[0m" << std::endl;
	Zombie* zombie = Zombie::newZombie("patata");
	Zombie* zombie3 = Zombie::randomChump("OldJesus");
	zombie->announce();
	zombie->~Zombie();
	zombie3->~Zombie();
	
	

	Zombie zombie2 = Zombie("berenjena");
	zombie2.announce();
	zombie2.~Zombie();
}
