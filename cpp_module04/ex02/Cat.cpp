
#include "Cat.hpp"
#include "Animal.hpp"
#include <iostream>

//canonical

Cat::Cat() : AAnimal()
{
	this->_type = "Cat";
	std::cout << _type << PINK << " animal created (std creator)" << RESET << std::endl;
	this->_Brain = new Brain();
}

Cat::Cat(const Cat& other)
{
    *this = other;
	std::cout << PINK << "animal created (copy creator)" << RESET << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		std::cout << GREEN << "animal COPIADO" << RESET << std::endl;
		this->_Brain = other._Brain;
		std::cout << GREEN << "cerebro COPIADO" << RESET << std::endl;
	}
	return *this;
}

Cat::~Cat()
{
	delete _Brain;
	std::cout << PINK << "cat animal Destroid" << RESET << std::endl;	
}

//ex00

void Cat::makeSound()
{
    	std::cout << _type << PINK " Miau!" << RESET << std::endl;
}

std::string Cat::getType()
{
	return (_type);
}