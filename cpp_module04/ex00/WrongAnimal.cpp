
#include "WrongAnimal.hpp"

//canonical

WrongAnimal::WrongAnimal() : _type("undefined")
{
	std::cout << PINK << _type << " has been created" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	*this = other;
	std::cout << PINK << "Wrongundefined animal created (copy creator)" << RESET << std::endl;

}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &Wronganimal)
{
	if (this != &Wronganimal)
		this->_type = Wronganimal._type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << _type << PINK << " Wronganimal Destroid" << RESET << std::endl;	
}

//ex00

void WrongAnimal::makeSound() const
{
	std::cout << _type << PINK " coudent make sound..." << RESET << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (_type);
}