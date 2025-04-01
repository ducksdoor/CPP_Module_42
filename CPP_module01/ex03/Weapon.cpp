/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 21:05:06 by lortega-          #+#    #+#             */
/*   Updated: 2025/04/01 21:05:08 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
	setType(str);
}

Weapon::~Weapon() {}

void Weapon::setType(std::string str)
{
	this->type = str;
}

std::string Weapon::getType()
{
	return(this->type);
}
