#include "AFixed.hpp"

bool Fixed::operator>(const Fixed& compFixed)
{
	return this->_value > compFixed._value;
}

bool Fixed::operator<(const Fixed& compFixed)
{
	return this->_value < compFixed._value;
}

bool Fixed::operator>=(const Fixed& compFixed)
{
	return this->_value >= compFixed._value;
}

bool Fixed::operator<=(const Fixed& compFixed)
{
	return this->_value <= compFixed._value;
}

bool Fixed::operator==(const Fixed& compFixed)
{
	return this->_value == compFixed._value;
}

bool Fixed::operator!=(const Fixed& compFixed)
{
	return this->_value < compFixed._value;
}

