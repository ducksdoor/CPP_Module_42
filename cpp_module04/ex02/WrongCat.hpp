#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
	std::string _type;

	public:
		//canonical
		WrongCat();
		WrongCat(const WrongCat& other);
		~WrongCat();
		WrongCat &operator=(const WrongCat &other);
		
		//ex00
		std::string getType() const;
};

#endif