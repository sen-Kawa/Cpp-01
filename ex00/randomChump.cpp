#include "Zombie.class.hpp"

void randomChump(std::string name)
{
	Zombie zombie;

	zombie.assign_name(name);
	zombie.announce();
	return ;
}
