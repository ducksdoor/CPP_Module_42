#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP


#define RESET	"\033[0m"
#define GREEN   "\033[0;92m"
#include <iostream>
class AMateria;

class ICharacter
{
	protected:
		std::string _name;

	public:

		//canonical
		ICharacter();
		ICharacter(const ICharacter &other);
		ICharacter &operator=(const ICharacter &other);

		//ex03
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif