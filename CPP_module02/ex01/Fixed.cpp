
#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
    std::cout << GREEN << "Default " << YELLOW << "constructor called" << RESET << std::endl;
}

Fixed::Fixed(int v)
{
    std::cout << GREEN << "Int " << YELLOW << "constructor called" << RESET << std::endl;
    this->setRawBits(v * (1 << _fractionalBits));
}

Fixed::Fixed(const float v)
{
    std::cout << GREEN << "Float " << YELLOW << "constructor called" << RESET << std::endl;
    this->setRawBits(static_cast<int>(roundf(v * (1 << _fractionalBits))));
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

float Fixed::toFloat(void) const {
	return static_cast<float>(_value) / (1 << _fractionalBits);
}

int Fixed::toInt(void) const {
	return _value >> _fractionalBits;
}

std::ostream& operator<<(std::ostream& out, const Fixed& other)
{
	out << other.toFloat();
	return out;
}
