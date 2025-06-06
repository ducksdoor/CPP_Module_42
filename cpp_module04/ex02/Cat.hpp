
#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		//ex00
	std::string _type;
		//ex01
	Brain* _Brain;

	public:
		//canonical
		Cat();
		Cat(const Cat& other);
		~Cat();
		Cat &operator=(const Cat &other);
		
		//ex00
		virtual void makeSound();
		virtual std::string getType();
};

#endif