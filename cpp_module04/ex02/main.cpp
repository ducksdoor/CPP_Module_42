
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main (void)
{

		std::cout << std::endl;
		std::cout << "test1" << std::endl;
		AAnimal* Animal = NULL;
		// Animal->makeSound();
		delete Animal;
		std::cout << std::endl;

		std::cout << "test2" << std::endl;
		AAnimal* Animaltwo = new Cat;
		Animaltwo->makeSound();
		std::cout << Animaltwo->getType() << std::endl;
		delete Animaltwo;

}

// int main() {
//     AAnimal a; // ❌ Esto da error
//     return 0;
// }