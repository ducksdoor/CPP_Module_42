#ifndef FIXED_HPP
#define FIXED_HPP
#define GREEN   "\033[0;92m"
#define BLUE    "\033[0;94m"
#define YELLOW  "\033[0;93m"
#define RED    "\033[0;91m"
#define RESET  "\033[0m"
#define PINK	"\033[0;35m"
#include <iostream>
#include <cmath>


class Fixed
{
	private:
		int _value;
		static const int _fractionalBits = 8;

	public:
		Fixed();
		Fixed(int v);
		Fixed(const float v);
		Fixed(const Fixed &other);
		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;

        //Operator 
            //Assignment
		Fixed &operator=(const Fixed &other);
			//inser
		friend std::ostream& operator<<(std::ostream&, const Fixed& other);
            //comparasion//
		bool operator>(const Fixed& compFixed);
		bool operator<(const Fixed& compFixed);
		bool operator>=(const Fixed& compFixed);
		bool operator<=(const Fixed& compFixed);
		bool operator==(const Fixed& compFixed);
		bool operator!=(const Fixed& compFixed);
            //aritmetic operator
		Fixed operator+(const Fixed &otherFixed) const;
		Fixed operator-(const Fixed &otherFixed) const;
		Fixed operator/(const Fixed &otherFixed) const;
		Fixed operator*(const Fixed &otherFixed) const;
             //increment/decrement (pre and post)
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);
			 //max and min
		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);
};

#endif
