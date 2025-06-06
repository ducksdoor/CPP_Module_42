#ifndef Ice_HPP
#define Ice_HPP

#include "AMateria.hpp"


class Ice : public AMateria 
{
	protected:
		std::string _type;

	public: 
		//canonical
		Ice();
		Ice(const Ice &other);
		Ice &operator=(const Ice &other);
		virtual ~Ice();

		//ex03
		// Cure(std::string const &type);

		// std::string const & getType() const; //Returns the materia type
		// virtual Cure* clone() const = 0;
		// virtual void use(ICharacter& target);
};

#endif