
#include "Contact.hpp"
#include <string>
#include <iomanip>
#include <iostream> 
#include <cstddef>

std::string truncate_and_add_dot(const std::string& str, size_t max_len) {
    if (str.length() > max_len) {
        return str.substr(0, max_len - 1) + ".";
    }
    return str;
}

void Contact::little_see()
{
	std::cout << "+        " << index << "|";
	std::cout << std::setw(10) << std::right << truncate_and_add_dot(name, 10) << "|";
	std::cout << std::setw(10) << std::right << truncate_and_add_dot(lastname, 10) << "|";
	std::cout << std::setw(10) << std::right << truncate_and_add_dot(nickname, 10) << "|" ;
	std::cout <<	"     +"<< std::endl;
}
