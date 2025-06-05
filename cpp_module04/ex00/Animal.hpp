
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#define RESET  "\033[0m"
#define PINK	"\033[0;35m"
#include <iostream>

class Animal
{
protected:
	//ex00
	std::string _type;

public:

	//canonical
	Animal();
	Animal(const Animal& other);
	Animal &operator=(const Animal &animal);
	virtual ~Animal();

	//ex00
	virtual void makeSound() const;
	virtual std::string getType() const;
};



#endif