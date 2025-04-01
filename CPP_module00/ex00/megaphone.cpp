/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 13:52:42 by lortega-          #+#    #+#             */
/*   Updated: 2025/04/01 13:52:44 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

int main (int argc, char *argv[])
{
	int	x;
	int z;

	x = 0;
	z = 1;
	std::string	result;
	if (argc == 1)
	{
		std::cout << "\033[1;31m * LOUD AND UNBEARABLE FEEDBACK NOISE * \033[0m" << std::endl;
		return (0);
	}
	else
	{
		while(argv[z])
		{
			result = argv[z];
			while(result[x])
			{
				std::cout << "\033[1;31m" << char(toupper(result[x])) << "\033[0m";
				x++;
			}
			x = 0;
			z++;
		}
		std::cout << std::endl;
	}
	return (0);
}
