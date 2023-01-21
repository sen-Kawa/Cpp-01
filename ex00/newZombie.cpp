#include "Zombie.class.hpp"

Zombie *newZombie(std::string name)
{
	Zombie	*zombie = new Zombie;

	zombie->assign_name(name);
	return (zombie);
}
