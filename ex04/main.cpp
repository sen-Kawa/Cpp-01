#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	(void) argv;
	if (argc != 4)
	{
		std::cout 
			<< "Invalid input" << std::endl;
		return (1);
	}
	return (0);
}
