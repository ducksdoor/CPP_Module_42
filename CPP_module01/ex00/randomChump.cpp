/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChum.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 13:55:50 by lortega-          #+#    #+#             */
/*   Updated: 2025/04/01 13:55:53 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	Zombie::randomChump(std::string strname)
{
	Zombie* zombie = Zombie::newZombie(strname);
	zombie->announce();
	return (zombie);
}
