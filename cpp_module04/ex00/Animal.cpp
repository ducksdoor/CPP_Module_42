
#include "Animal.hpp"

//canonical

Animal::Animal() : _type("undefined")
{
	std::cout << PINK << _type << " has been created" << RESET << std::endl;
}

Animal::Animal(const Animal& other)
{
	*this = other;
	std::cout << PINK << "undefined animal created (copy creator)" << RESET << std::endl;

}

Animal &Animal::operator=(const Animal &animal)
{
	if (this != &animal)
		this->_type = animal._type;
	return *this;
}

Animal::~Animal()
{
	std::cout << _type << PINK << " animal Destroid" << RESET << std::endl;	
}

//ex00

void Animal::makeSound() const
{
	std::cout << _type << PINK " coudent make sound..." << RESET << std::endl;
}

std::string Animal::getType() const
{
	return (_type);
}