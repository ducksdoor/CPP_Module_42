/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 21:04:44 by lortega-          #+#    #+#             */
/*   Updated: 2025/04/01 21:04:45 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANAB_HPP
# define  HUMANAB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon *weapon;
		
	public:
		HumanB(std::string strname);
		~HumanB();
		void attack();
		void setWeapon(Weapon &newWeapon);
};

#endif
