
#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	private:
	
	//ex00
	std::string _type;
	//ex01
	Brain* _Brain;

	public:
		//canonical
		Dog();
		Dog(const Dog& other);
		~Dog();
		Dog &operator=(const Dog &other);
		
		//ex00
		virtual void makeSound();
		virtual std::string getType();
};

#endif