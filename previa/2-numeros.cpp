/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2-numeros.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:34:41 by lortega-          #+#    #+#             */
/*   Updated: 2023/11/18 16:34:43 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
(2.2.1) Crea un programa que muestre la suma de 25 y 34.
(2.2.2) Crea un programa que muestre la suma de 12345, 112233 y 67890.
(2.2.3) Crea un programa que muestra la suma de 123456789012 y 90123456789.

Los simbolos encargados de asignar las operaciones son los mismo que en c.

*/

int main()
{
	//ahora si es valido. Si te fijas, tenemos que separar los tipos de datos para poder imprimirlos.
	std::cout << "5 + 7 = " << 5 + 7 << "\n";

	std::cout << "Resultado = " << 25 + 34 << "\n";

	std::cout << 12345+112233 << " y ademas printeo 67890 \n";

	std::cout << 123456789012 + 90123456789 << "\n";
	return 0;
}