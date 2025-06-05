
#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	private:
	std::string _type;

	public:
		//canonical
		Dog();
		Dog(const Dog& other);
		~Dog();
		Dog &operator=(const Dog &other);
		
		//ex00
		void makeSound() const;
		std::string getType() const;
};

#endif