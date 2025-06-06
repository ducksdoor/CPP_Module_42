
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include <iostream>

//canonical

WrongCat::WrongCat() : WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << _type << PINK << " animal created (std creator)" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat& other)
{
    *this = other;
	std::cout << PINK << "animal created (copy creator)" << RESET << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
		this->_type = other._type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << PINK << "Wrongcat animal Destroid" << RESET << std::endl;	
}

//ex00


std::string WrongCat::getType() const
{
	return (_type);
}