
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main (void)
{
	// {
	// 	const Animal* j = new Dog();
	// 	const Animal* i = new Cat();
	// 	delete j;
	// 	delete i;
	// 	return 0;
	// }

	{
		const int size = 100;
		Animal* Animals[size];
		int x = 0;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "More test" << std::endl;
		while (x < 100)
		{
			if (x < 50)
				Animals[x] = new Dog();
			else 
				Animals[x] = new Cat();
			x++;
		}
		x--;
		while (x >= 0)
		{
			delete Animals[x];
			x--;
		}
	}
}