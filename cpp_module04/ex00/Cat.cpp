
#include "Cat.hpp"
#include "Animal.hpp"
#include <iostream>

//canonical

Cat::Cat() : Animal()
{
	this->_type = "Cat";
	std::cout << _type << PINK << " animal created (std creator)" << RESET << std::endl;
}

Cat::Cat(const Cat& other)
{
    *this = other;
	std::cout << PINK << "animal created (copy creator)" << RESET << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
		this->_type = other._type;
	return *this;
}

Cat::~Cat()
{
	std::cout << PINK << "cat animal Destroid" << RESET << std::endl;	
}

//ex00

void Cat::makeSound() const
{
    	std::cout << _type << PINK " Miau!" << RESET << std::endl;
}

std::string Cat::getType() const
{
	return (_type);
}