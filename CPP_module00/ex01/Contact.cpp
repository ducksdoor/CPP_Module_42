
#include "Contact.hpp"
#include <string>
#include <iostream> 

// Contact(int x) : index(x)
// {
// 	index = x;
// 	std::cout <<"created with index " << x << std::endl;
// }

void Contact::little_see()
{
	std::cout << "+------------------------------------------------+" << std::endl;
	std::cout << "         " << index << "|";
	std::cout << "none name | " ;
	std::cout << "none lastname | " ;
	std::cout << "none nick | " << std::endl;
	//std::cout << "none phone" << std::endl;
	//std::cout << "none secret" << std::endl;
}

// std::string format_string(std::string work)
// {
// 	std::string	result[10];

// 	std::string result = "         ";
// 	return (result[10]);
// }