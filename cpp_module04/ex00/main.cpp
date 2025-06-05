
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
int main (void)
{
    {
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        std::cout << j->getType() << " " << std::endl;
        
        const Animal* i = new Cat();
        std::cout << i->getType() << " " << std::endl;
        i->makeSound();
        j->makeSound();
        meta->makeSound();
        delete(meta);
        delete(j);
        delete(i);
    }

    {
        std::cout << std::endl;
        std::cout << std::endl;
    std::cout << "More test" << std::endl;
    std::cout << "Monster creator" << std::endl;
    Animal Monster;
    std::cout << std::endl;

    std::cout << "Dog creator" << std::endl;
    Dog    dog;
    std::cout << std::endl;

    std::cout << "Cat creator" << std::endl;
    Cat    cat;
    std::cout << std::endl;

    Monster.makeSound();
    dog.makeSound();
    cat.makeSound();
    }

    {
        std::cout << std::endl;
        std::cout << "WRONG TEST" << std::endl;

        const WrongAnimal* meta = new WrongAnimal();
        const WrongAnimal* i = new WrongCat();
        std::cout << i->getType() << " " << std::endl;
        i->makeSound();
        meta->makeSound();
        delete(meta);
        delete(i);
    }

}