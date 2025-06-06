
#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#define RESET	"\033[0m"
#define GREEN   "\033[0;92m"
#define BLUE    "\033[0;94m"
#define PINK	"\033[0;35m"
#include <iostream>
class ICharacter;

class AMateria
{
	protected:
		std::string _type;

	public: 
		//canonical
		AMateria();
		AMateria(const AMateria &other);
		AMateria &operator=(const AMateria &other);
		virtual ~AMateria();

		//ex03
		AMateria(std::string const &type);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};


#endif