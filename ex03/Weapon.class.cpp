#include "Weapon.class.hpp"

const std::string&	Weapon::getType(void)
{
	return (type);
}

void	Weapon::setType(std::string newType)
{
	type = newType;
	return ;
}

Weapon::Weapon(std::string type) : type(type)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}
