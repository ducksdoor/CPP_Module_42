
#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

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