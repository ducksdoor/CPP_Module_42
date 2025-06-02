#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>
#define GREEN   "\033[0;92m"
#define BLUE    "\033[0;94m"
#define YELLOW  "\033[0;93m"
#define RED    "\033[0;91m"
#define RESET  "\033[0m"
#define PINK	"\033[0;35m"

class Fixed {
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
            //Assig
		Fixed &operator=(const Fixed &other);

};

	//inser
std::ostream& operator<<(std::ostream& out, const Fixed& other);

#endif

