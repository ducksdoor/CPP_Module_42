
#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include "Animal.hpp"

class Brain
{
protected:
	//ex01
	std::string _ideas[100];

public:

	//canonical
	Brain();
	Brain(const Brain& other);
	Brain &operator=(const Brain &other);
	virtual ~Brain();
};



#endif