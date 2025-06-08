
#include "ICharacter.hpp"

ICharacter::ICharacter()
{
    	std::cout << GREEN << " ICharacter has been created" << RESET << std::endl;
}

ICharacter::ICharacter(const ICharacter &other)
{
    *this = other;
}

ICharacter &ICharacter::operator=(const ICharacter &other)
{
    if (this != &other)
        this->_name = other._name;
    return *this;
}


ICharacter::~ICharacter()
{
    std::cout << " ICharacter has been destroid" << std::endl;
}