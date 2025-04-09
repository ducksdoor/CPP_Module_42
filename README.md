# CPP_Module_42

# 0 INTRODUCCIÓN:

Si estás aquí, es (posiblemente) porque quieres aprender a programar en C++ y ademas estás haciendo el cursus de 42. Si has llegado por error, no sigas leyendo, porque me temo que ésta no va a ser una buena lectura para un rato de aburrimiento, C++ no es el lenguaje más fácil...

En mi busqueda de información he encontrado esta página:

https://www.aprendeaprogramar.com/cursos/ver.php?id=16

---> Creo que esta maravilloso como introduccióon a c++

Estos proyectos tampoco son lo mas entretenido del mundo, es volver a aprender un lenguaje... bueno, juguemos un poco...

# 1 Pasando de C a C++

¿Podemos decir que es igual pero diferente?


### -> std::
	es el espacio de nombres (namespace) estándar de C++. Escribo esto mientras me doy cabezazos intentando programar sin leer más que la documentación justa... Me he dado cuenta que en c++ como que todo se "define" antes de usarlo, para usar las cosas estandars usamos "std::" seguido de lo que queramos usar  por ejemplo, "string" o "cuot" ..

### -> Un std::string no es un char *
	Por parecer se parecen pero no lo son, por tanto para usar un string como char * habra que usar la funcion .c_str().

### -> cuot  (std::cuot)
	hace refencia a  "character output" (salida de caracteres). es un objeto de tipo flujo de salida que se usa para enviar datos a la consola.

### -> err	(std::err)
	Manda a terminal de forma inmediata un mensaje de error. No esta bufferizado asique sale de inmediato.

# 2 CPP_module00

Se trata de una bateria de ejercicios propuesta en la academia de programación 42.
En estos dos ejercicios la idea al menos por lo que he entendido es no usar memoria dinamica
	Subire por aquí mi trabajo

### ex00 Megaphone
	Muy simple, solo hay que replicar un programa que imprima lo que dice el subject, a tener en cuenta:
	./Megaphone solo tiene que imprimir una cosa en concreto.
	./Megaphone con argumentos tiene que imprimir los argumentos.

### ex01 PhoneBook
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
		->dale un nombre relevante al archivo.

# 2 CPP_module01

Crearemos ahora clases que si tendremos que dar memoria dinamica...

### ex00
	creamos un clase zombie:
		-> Tendra un atributo privado que se llame nombre
		-> los zombies se anuncian con: nombre: BraiiiiiiinnnzzzZ...
### ex01
	Hay que hacer una función que cree una "horda" de zombies
	El subject te invita a que hagas tus propias pruebas/test
### ex02
	Escribe un programa que contenga:

	->Una variable de tipo cadena (string) inicializada con "HI THIS IS BRAIN".
	->stringPTR: un puntero a la cadena:
		-> Un puntero a una cadena es simplemente una variable que almacena la dirección de memoria donde se encuentra la cadena. En C++, puedes crear un puntero a una cadena utilizando el operador &.
	->stringREF: una referencia a la cadena.
		-> Una referencia en C++ es simplemente un alias de una variable existente. En el caso de una cadena, una referencia te permite acceder a la cadena sin necesidad de usar un puntero.

	Tu programa debe imprimir:
	->La dirección de memoria de la variable de cadena.
	->La dirección de memoria almacenada en stringPTR.
	->La dirección de memoria almacenada en stringREF.

	Y luego:
	->El valor de la variable de cadena.
	->El valor al que apunta stringPTR.
	->El valor al que apunta stringREF.

	Con este ejemplo, puedes ver cómo usar tanto punteros como referencias para manipular cadenas en C++.
### ex03
	volvemos con los zombies, ahora implementaremos la 
	->clase Weapon
		->atributo privado ->type (cadena de texto)
		->funcion getType() ->devuelve referencia a type
		->funcion setType() ->establece type utilizando un nuevo valor
	->clase HumanA y HumanB con un weapon y un name 
		->funcion attack() --> <name> ataca con su <tipo de arma>
	HumanA recibe siempre el Weapon en el constructor 
	HumanB puede no tener siempre un arma 
### ex04
	Crea un programa que reciba tres parámetros en el siguiente orden: un nombre de archivo y dos cadenas de texto, s1 y s2.
		-> eso quiere decir que pilla argumentos
	Se abrira el archivo se copia en un nuevo archivo llamada nombredado.replace y reemplaza cada s1 por s2
### ex05
	Hay que crear una clase harl que manda cuatro tipos de mensajes 
### ex06
	Es como el cinco pero esta vez hay que entregarle argumentos y cambia un poco la implementacion, ahora es desde el mensaje mas bajo al mas alto.
	Ademas, hay que hacer un bucle switch

# 2 CPP_module02

Con este cpp aprenderemos a definir los comparadores, por ejemplo, cuando usas un clase Patata.A = clase Patata.B que valores de patata tendran que ser copiados?
### ex00
	-> creamos una estructura basica con el constructor copia, el destructor, el operador = ...
### ex01
	-> creamos mas funciones a nuestra clase de punto fijo.
### ex01
	-> lo mismo que en el ejercicio anterior, pero mas ...
		
# 2 CPP_module03

Aqui creamos una clase que realiza acciones.

### ex00 
	-> simplemente inciamos a crear un "robot" que ataca, recibe daño y se cura..
