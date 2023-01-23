#include "Weapon.class.hpp"
#include "HumanA.class.hpp"
#include <iostream>
#include <string>

void	HumanA::attack(void)
{
	std::cout
		<< name << " attacks with their " << weapon.getType()
	<< std::endl;
	return ;
}

HumanA::HumanA(std::string name, Weapon weapon) : name(name), weapon(weapon)
{
	return ;
}

HumanA::~HumanA(void)
{
	return ;
}
