# CPP_Module_42

# 1 INTRODUCCIÓN:

Si estás aquí, es (posiblemente) porque quieres aprender a programar en C++ y ademas estás haciendo el cursus de 42. Si has llegado por error, no sigas leyendo, porque me temo que ésta no va a ser una buena lectura para un rato de aburrimiento, C++ no es el lenguaje más fácil...

En mi busqueda de información he encontrado esta página:

https://www.aprendeaprogramar.com/cursos/ver.php?id=16

---> Creo que esta maravilloso como introduccióon a c++

Estos proyectos tampoco son lo mas entretenido del mundo, es volver a aprender un lenguaje... bueno, juguemos un 

# 2 CPP_module00

Se trata de una bateria de ejercicios propuesta en la academia de programación 42.
	Subire por aquí todos los ejercicios resueltos como alguna que otra cosa que haga para aprender como se trabaja en c++.

### ex00 Megaphone
	Muy simple, solo hay que replicar un programa que imprima lo que dice el subject, a tener en cuenta:
	./Megaphone solo tiene que imprimir una cosa en concreto.
	./Megaphone con argumentos tiene que imprimir los argumentos.

### ex00 PhoneBook
	Un poco mas complicado, se trata de hacer una especie de agenda telefonica:
	
	- Hay que implementar dos clases:
	-PhoneBook 
		--> tiene un arraid de contactos
		--> puede almacenar un maximo de 8 contactos
			-->El noveno contacto borrara al mas antiguo
			--> La asignacion dinamica esta prohibida
	-Contact
		--> Representa un contacto
	
	La agenda tiene que ser instanciada como una instancia PhoneBook
	Los contactos como una instancia de clase Contact
		--> Las clases seran como quieras
		--> todo lo que siempre se usará dentro de una clase debe ser privado
		--> lo que se puede usar fuera debe ser publico.

	Al inicio del programa se pide que el usuario use un comando:
		->ADD
			->Se le pide informacion campo por campo y se agrega a la agenda
			->nombre/ apellido/ apodo/ numerotelefo/ secretomasoscuro
			->no se puede tener un campo vacio
		->SEARCH
			->muestra los contactos en una lista de 4 columnas:
				->indice ->nombre ->apellido ->apodo
				->cada columna tiene ancho de 10 caracteres 
				->lo separa una | 
				->texto alineado a la derecha
				->si el texto es mas largo se trunca el ultimo valor por .
			->pide al usuario un inice para mostrar mas 
			->si el indice esta fuera del rango define algo
			-> si no, se muestra la info campor por linea
		->EXIT
			->El programa se cierra y se pierden os contactos
		->cualquier otra entrada se ignora
		->despues de cada comando se vuelve a esperar otro
		->dale un nombre relevante al archivo



