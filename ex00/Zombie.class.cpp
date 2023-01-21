#include "Zombie.class.hpp"
#include <iostream>

void Zombie::assign_name(std::string name)
{
	this->name = name;
	return ;
}

void Zombie::announce(void)
{
	std::cout 
		<< this->name << ": " << "BraiiiiiiinnnzzzZ..."
	<< std::endl;
	return ;
}

Zombie::Zombie(void)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout
		<< this->name << "is back underground"
	<< std::endl;
	return ;
}
