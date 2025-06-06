
#ifndef CURE_HPP
#define CURE_HPP
// revisado con sara! 
#include "AMateria.hpp"


class Cure : public AMateria 
{
	protected:

	public: 
		//canonical
		Cure();
		Cure(const Cure &other);
		Cure &operator=(const Cure &other);
		~Cure();

		//ex03

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif