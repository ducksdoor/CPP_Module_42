#ifndef Ice_HPP
#define Ice_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria 
{
	protected:

	public: 
		//canonical
		Ice();
		Ice(const Ice &other);
		Ice &operator=(const Ice &other);
		~Ice();

		//ex03
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif