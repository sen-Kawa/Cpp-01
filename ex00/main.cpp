#include "Zombie.class.hpp"

int	main(void)
{
	Zombie *zombie;
	
	zombie = newZombie("Pedro");	
	zombie->announce();
	delete (zombie);

	
	return (0);
}
