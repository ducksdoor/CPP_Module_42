/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1-hola_mundo.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lortega- <lortega-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:34:41 by lortega-          #+#    #+#             */
/*   Updated: 2023/11/18 16:34:43 by lortega-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  Ejercicios de prueba despues del hola mundo.

(1.2.1) Crea un programa, que en vez de decir "Hola, mundo", 
te salude a ti por tu nombre .


*/

#include <iostream>




int main()
{
	//std__count parece ser como el printf
	std::cout << "Hola mundo,\n";

	std::cout << "hola Lucas\n";

	// Estamos usando varios textos independientes
	std::cout << "Hola, " << "estudiante de 42\n";
	//Esto no parece hacer mucho por ahora la verdad. Fijate que da el mismo resultado.
	std::cout << "Hola, " "estudiante de 42\n";

	return 0;
}
