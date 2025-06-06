
#include "Cure.hpp"

Cure::Cure() : AMateria("Cure")
{
    	std::cout << GREEN << " Cure has been created" << RESET << std::endl;
}

Cure::Cure(const Cure &other)
{
    *this = other;
}

Cure &Cure::operator=(const Cure &other)
{
    if (this != &other)
        this->_type = other._type;
    return *this;
}

Cure::~Cure()
{
    	std::cout << GREEN << " Cure has been destroid" << RESET << std::endl;
}