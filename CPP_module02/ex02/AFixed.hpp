#ifndef AFIXED_HPP
#define AFIXED_HPP
#include <iostream>
#include <cmath>

class Fixed {
	private:
		int _value;
		static const int _fractionalBits = 8;

	public:
		Fixed();
		Fixed(const Fixed &other);
		~Fixed();

		//int getRawBits(void) const;
		//void setRawBits(int const raw);

        //Operator 
            //Assignment
		Fixed &operator=(const Fixed &other);
            //comparasion//
		bool operator>(const Fixed& compFixed);
		bool operator<(const Fixed& compFixed);
		bool operator>=(const Fixed& compFixed);
		bool operator<=(const Fixed& compFixed);
		bool operator==(const Fixed& compFixed);
		bool operator!=(const Fixed& compFixed);
            //operaciones
		Fixed operator+(const Fixed);
		Fixed operator-(const Fixed);
		Fixed operator/(const Fixed);
		Fixed operator*(const Fixed);
            //incrementos
		Fixed operator++();
		Fixed operator--();
		Fixed operator--(int);
		Fixed operator++(int);


};

#endif



