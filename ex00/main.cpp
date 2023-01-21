#include "Zombie.class.hpp"
#include <iostream>

int	main(void)
{
	Zombie		*zombie;
	std::string	input;
	
	std::cout
		<< "Name your zombie:"
	<< std::endl;
	std::cin >> input;
	zombie = newZombie(input);	
	zombie->announce();
	delete (zombie);
	std::cout
		<< "Name your chump:"
	<< std::endl;
	std::cin >> input;
	randomChump(input);	
	return (0);
}
