#include "Character.hpp"

Character::Character() : ICharacter()
{
	_name = "player";
	_size = 0;
	std::cout << GREEN << " Character has been created" << RESET << std::endl;
}

Character::Character(const Character &other)
{
    *this = other;
}

Character &Character::operator=(const Character &other)
{
    if (this != &other)
        this->_name = other._name;
    return *this;
}

Character::~Character()
{
    std::cout << " Character has been destroid" << std::endl;
}

//ex03

std::string const &Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	int aux = 0;
	if (this->_size < 4)
	{
		while (this->_bag[aux])
			aux++;
		_bag[aux] = m;
		_size ++;
		std::cout<< m->getType() << " Equiped" << std::endl;
	}
	else
		std::cout << "The inventory are fully" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 4)
	{
		std::cout << "Invalid index for bag."<< std::endl;
		return ;
	}
	if (!_bag[idx])
	{
		std::cout << "Dont exist this materia" << std::endl;
		return ;
	}
	else
	{
		//NO PERDER LA MATERIA
		_size --;
		_bag[idx] = NULL;
		std::cout << GREEN << this->_name << " unequiped slot" << idx << RESET << std::endl;
	}
}

void Character::use(int idx, Character& target)
{
	std::cout << GREEN << this->_name << " use " << _bag[idx]->getType() << std::endl;
	_bag[idx]->use(target);
}