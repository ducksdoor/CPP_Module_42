
#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    	std::cout << BLUE << " Ice has been created" << RESET << std::endl;
}

Ice::Ice(const Ice &other)
{
    *this = other;
}

Ice &Ice::operator=(const Ice &other)
{
    if (this != &other)
        this->_type = other._type;
    return *this;
}

Ice::~Ice()
{
    	std::cout << BLUE << " Ice has been destroid" << RESET << std::endl;
}

void AMateria::use(ICharacter &target)
{
    std::cout << PINK << "* shoots an ice bolt at " << target.getName() << " *" << RESET << std::endl;
}

AMateria *Ice::clone() const
{
    return new Ice(*this);
}