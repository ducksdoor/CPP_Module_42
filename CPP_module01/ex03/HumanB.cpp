/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 21:04:30 by lortega-          #+#    #+#             */
/*   Updated: 2025/04/01 21:04:37 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string strname)
{
	this->name = strname;
	this->weapon = NULL;
}

HumanB::~HumanB() {}

void HumanB::attack()
{
	if (weapon)
		std::cout<< "\033[34m" << name << "\033[0m"<<" atacks with their "<< "\033[31m" << this->weapon->getType()<< "\033[0m" <<std::endl;
	else
		std::cout<< "\033[34m" << name << "\033[0m"<< "\033[31m coudent attack\033[0m" <<std::endl;
}

void HumanB::setWeapon(Weapon &newWeapon)
{
	this->weapon = &newWeapon;
}
