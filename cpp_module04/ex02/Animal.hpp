
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#define RESET	"\033[0m"
#define GREEN   "\033[0;92m"
#define PINK	"\033[0;35m"
#define RED		"\033[0;91m"
#include <iostream>

class AAnimal
{
protected:
	//ex00
	std::string _type;

public:

	//canonical
	AAnimal();
	AAnimal(const AAnimal& other);
	AAnimal &operator=(const AAnimal &animal);
	virtual ~AAnimal();

	//ex00
	virtual void makeSound() = 0;
	virtual std::string getType() = 0;
};



#endif