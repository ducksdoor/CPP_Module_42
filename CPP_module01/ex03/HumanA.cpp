/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 21:04:05 by lortega-          #+#    #+#             */
/*   Updated: 2025/04/01 21:04:06 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"

HumanA::HumanA(std::string strname, Weapon &weapon)
{
	this->name = strname;
	this->weapon = &weapon;
}

HumanA::~HumanA() {}

void HumanA::attack()
{
	std::cout<< "\033[34m" << name << "\033[0m"<<" atacks with their "<< "\033[31m" << weapon->getType()<< "\033[0m" <<std::endl;
}
