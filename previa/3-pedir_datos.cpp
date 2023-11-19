/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3-pedir_datos.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:34:41 by lortega-          #+#    #+#             */
/*   Updated: 2023/11/18 16:34:43 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	int numero;
	int n1;
	int n2; 
	int suma;
	
	std::cout << "Dime un número :\n";
	std::cin >> numero;
	if (numero * 3 > 0)
		std::cout << "El triple de tu número es [ " << numero * 3 << " ]\n" ;
	else 
		std::cout << " \n\n Eso no es un número y lo sabes ... \n\n";

	std::cout << "Voy a sumar tus numeros. \nDame el primer número\n";
	std::cin >> n1;
	std::cout << "EY, Falta el segundo\n";
	std::cin >> n2;
	std::cout << "tu número sumado es : " << n1 + n2 << "\n";

//podemos crear la variable simplemente

	suma = n1 + n2;

	std::cout << "la suma de otro forma da el mismo resultado --->" << suma << "\n";

	return 0;
}


// se pueden llamar a las variables en una sola linea tal que asi:

// int numero, n1, n2, suma;