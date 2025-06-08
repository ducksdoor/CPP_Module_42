#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	private:

		AMateria** _bag;
		int		_size;
		
	public:
		//canonical
		Character();
		Character(const Character &other);
		Character &operator=(const Character &other);

		//ex03
		~Character() {}
		std::string const &getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, Character& target);
		};

#endif