
#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {}

Fixed::Fixed(int v)
{
    this->setRawBits(v * (1 << _fractionalBits));
}

Fixed::Fixed(const float v)
{
    this->setRawBits(static_cast<int>(roundf(v * (1 << _fractionalBits))));
}

Fixed::Fixed(const Fixed &other)
{
    *this = other;
}

Fixed::~Fixed() {}

Fixed& Fixed::operator=(const Fixed& other){
	if (this != &other){
		_value = other.getRawBits();
	}
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
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
	return this->_value != compFixed._value;
}

Fixed Fixed::operator+(const Fixed &otherFixed) const
{
	Fixed result;
	result._value = _value + otherFixed._value;
	return (result);
}

Fixed Fixed::operator-(const Fixed &otherFixed) const
{
	Fixed result;
	result._value = _value - otherFixed._value;
	return (result);
}

Fixed Fixed::operator/(const Fixed &otherFixed) const
{
	Fixed result;
	result._value = _value / otherFixed._value;
	return (result);
}

Fixed Fixed::operator*(const Fixed &otherFixed) const
{
	Fixed result;
	result._value = (static_cast<long>(_value) * otherFixed._value) >> _fractionalBits;
	return (result);
}

Fixed &Fixed::operator++()
{
	this->_value += 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	this->_value += 1;
	return temp;
}

Fixed &Fixed::operator--()
{
	this->_value -= 1;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	this->_value -= 1;
	return temp;
}

Fixed &Fixed::min(Fixed& a, Fixed& b)
{
	if (a._value > b._value)
		return b;
	else
		return a; 
}

const Fixed &Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a._value > b._value)
		return b;
	else
		return a; 
}

Fixed &Fixed::max(Fixed& a, Fixed& b)
{
	if (a._value > b._value)
		return a;
	else
		return b; 
}

const Fixed &Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a._value > b._value)
		return a;
	else
		return b; 
}
