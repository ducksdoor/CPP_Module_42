
#include "Animal.hpp"

//canonical

AAnimal::AAnimal() : _type("undefined")
{
	std::cout << PINK << _type << " has been created" << RESET << std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
{
	*this = other;
	std::cout << PINK << "undefined animal created (copy creator)" << RESET << std::endl;

}

AAnimal &AAnimal::operator=(const AAnimal &animal)
{
	if (this != &animal)
		this->_type = animal._type;
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << _type << PINK << " animal Destroid" << RESET << std::endl;	
}

//ex00

// void AAnimal::makeSound() const
// {
// 	std::cout << _type << PINK " coudent make sound..." << RESET << std::endl;
// }

// std::string AAnimal::getType() const
// {
// 	return (_type);
// }