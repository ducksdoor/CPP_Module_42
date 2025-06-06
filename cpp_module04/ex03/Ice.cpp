
#include "Ice.hpp"

Ice::Ice() : _type("ice")
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