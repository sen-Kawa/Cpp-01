#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int	arg_check(int argc, char **argv, std::ifstream &ifs)
{
	if (argc != 4)
	{
		std::cout 
			<< "Invalid input, 4 args needed."
		<< std::endl;
		return (-1);
	}
	if (!ifs.good())
	{
		std::cout 
			<< "Error when reading from file " << argv[1]
		<< std::endl;
		return (-1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
		(void)argv;
	std::ifstream	ifs(argv[1]);

	if (arg_check(argc, argv, ifs) == -1)
	{
		return (-1);
	}
	return (0);
}
