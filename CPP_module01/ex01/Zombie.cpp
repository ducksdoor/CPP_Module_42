/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 13:56:07 by lortega-          #+#    #+#             */
/*   Updated: 2025/04/01 13:56:09 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::~Zombie()
{
	std::cout << "\033[34m" << this->name << "\033[0m" << ": "
	<< "\033[90mdead\033[0m" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << "\033[34m" << this->name << "\033[0m" << ": "
	<< "\033[90mBraiiiiiiinnnzzzZ...\033[0m" << std::endl;
}

void Zombie::setName(std::string strname)
{
	this->name = strname;
}
