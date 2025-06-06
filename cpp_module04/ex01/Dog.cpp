
#include "Dog.hpp"
#include "Animal.hpp"
#include <iostream>

//canonical

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	std::cout << _type << PINK << " animal created (std creator)" << RESET << std::endl;
	this->_Brain = new Brain();
}

Dog::Dog(const Dog& other)
{
    *this = other;
	std::cout << PINK << "animal created (copy creator)" << RESET << std::endl;
}

Dog &Dog::operator=(const Dog &other)
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

Dog::~Dog()
{
	delete _Brain;
	std::cout << PINK << "dog animal Destroid" << RESET << std::endl;	
}

//ex00

void Dog::makeSound() const
{
    	std::cout << _type << PINK " Woof!" << RESET << std::endl;
}

std::string Dog::getType() const
{
	return (_type);
}