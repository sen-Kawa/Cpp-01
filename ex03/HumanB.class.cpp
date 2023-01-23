#include "HumanB.class.hpp"

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
	return ;
}

void	HumanB::attack()
{
	if (!weapon)
	{
		std::cout
			<< name << " is unarmed!";
	}
	else
	{
		std::cout
			<< name << " attacks with their " << weapon->getType();
	}
	std::cout << std::endl;
	return ;
}

HumanB::HumanB(std::string name) : name(name)
{
	weapon = NULL;
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}
