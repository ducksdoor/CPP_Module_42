/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 15:15:56 by lortega-          #+#    #+#             */
/*   Updated: 2025/04/01 15:16:00 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string strname)
{
	int	x;
	x = 0;
	Zombie *zombie = new Zombie[N];


	while (x < N)
	{
		zombie[x].setName(strname);
		x++;
	}
	return (zombie);
}
