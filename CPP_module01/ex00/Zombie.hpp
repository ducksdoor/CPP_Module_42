/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 13:56:17 by lortega-          #+#    #+#             */
/*   Updated: 2025/04/01 13:56:19 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie(std::string strname);
		~Zombie();

		static Zombie *newZombie(std::string strname);
		void announce(void);
		static Zombie* randomChump(std::string strname);
};

#endif
