/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4-salto_de_linea.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:34:41 by lortega-          #+#    #+#             */
/*   Updated: 2023/11/18 16:34:43 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// podemos usar debajo del include una especie de atajo:

// using namespace std;

// Con esto podremos ahorrarnos el std:: delante de todos los cout y los cin

int main()
{
	std::string name;

	std::cout << "Primera linea." << std::endl;
	//que me imagino que es algo como end line.
	std::cout << "Segunda linea." << std::endl << "Tercera linea." << std::endl;
	// Por tanto no haria falta poner \n 

	std::cout <<"¿Cual es tu nombre?";
	std::cin >> name;
	std::cout << "Buenos dias " << name << std::endl << "¿Como estas?";

	return 0;
}