
#include "AMateria.hpp"

//canonical

AMateria::AMateria() : _type("dinamic")
{
    	std::cout << PINK << " AMateria has been created" << RESET << std::endl;
}

AMateria::AMateria(const AMateria &other)
{
    *this = other;
}

AMateria &AMateria::operator=(const AMateria &other)
{
    if (this != &other)
        this->_type = other._type;
    return *this;
}

AMateria::~AMateria()
{
    	std::cout << PINK << " AMateria has been destroid" << RESET << std::endl;
}

//ex03

AMateria::AMateria(std::string const &type)
{
    this->_type = type;
}

std::string const &AMateria:: getType() const
{
    return this->_type;
}

void AMateria::use(ICharacter & target)
{
    std::cout << _type << PINK << " coudent used..." << RESET << std::endl;
}