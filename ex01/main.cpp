#include "Zombie.class.hpp"
#include <iostream>

int	main(void)
{
	Zombie		*zombie;
	std::string	input;
	int			horde_size;
	
	horde_size = 7;
	std::cout
		<< "Name your zombies:"
	<< std::endl;
	std::cin >> input;
	zombie = zombieHorde(horde_size, input);	
	for (int i = 0; i < horde_size; i++)
	{
		zombie[i].announce();
	}
	delete[] (zombie);
	return (0);
}
