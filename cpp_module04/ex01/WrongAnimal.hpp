
#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#define RESET  "\033[0m"
#define PINK	"\033[0;35m"
#include <iostream>

class WrongAnimal
{
protected:
	//ex00
	std::string _type;

public:

	//canonical
	WrongAnimal();
	WrongAnimal(const WrongAnimal& other);
	WrongAnimal &operator=(const WrongAnimal &animal);
	virtual ~WrongAnimal();

	//ex00
	virtual void makeSound() const;
	virtual std::string getType() const;
};



#endif