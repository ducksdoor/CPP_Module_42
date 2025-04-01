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

#include <iostream>
#include <string>

int main (void)
{
	std::string str= "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "\033[32m  this is the memory adrres of the str\033[0m" << std::endl;
	std::cout << "\033[34m" << &str << "\033[0m" << std::endl;
	std::cout << "\033[32m  The memory address held by stringPTR.\033[0m" << std::endl;
	std::cout << "\033[31m" << &stringPTR << "\033[0m" << std::endl;
	std::cout << "\033[32m  The memory address held by stringREF.\033[0m" << std::endl;
	std::cout << "\033[34m" << &stringREF << "\033[0m" <<std::endl <<std::endl;

	std::cout << "\033[32m  str value\033[0m" << std::endl;
	std::cout << "\033[33m" << str << "\033[0m" << std::endl;
	std::cout << "\033[32m  stringPTR: value\033[0m" << std::endl;
	std::cout << "\033[34m" <<  stringPTR << "\033[0m"  <<std::endl;
	std::cout << "\033[32m  stringREF value\033[0m" << std::endl;
	std::cout << "\033[33m" <<  stringREF << "\033[0m" <<std::endl;
}
