
#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	private:
	std::string _type;

	public:
		//canonical
		Cat();
		Cat(const Cat& other);
		~Cat();
		Cat &operator=(const Cat &other);
		
		//ex00
		void makeSound() const;
		std::string getType() const;
};

#endif