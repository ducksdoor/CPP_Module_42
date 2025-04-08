
#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
    std::cout << GREEN << "Default constructor called" << RESET << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << YELLOW << "Copy constructor called"<< RESET << std::endl;
    *this = other;
}

Fixed::~Fixed() 
{
    std::cout << RED << "Destructor called"<< RESET << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other){
	std::cout << BLUE << "Copy assignment operator called " << RESET << std::endl;
	if (this != &other){
		_value = other.getRawBits();
	}
	return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << PINK << "getRawBits member function called" << RESET << std::endl;
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}
