#include <cstddef>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int	arg_check(int argc, char **argv, std::ifstream &ifs, std::ofstream &ofs)
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
	if (!ofs.good())
	{
		std::cout 
			<< "Error when creating output file."
		<< std::endl;
		return (-1);
	}
	return (0);
}

void	replace(std::ifstream &ifs, std::ofstream &ofs, std::string s1, std::string s2)
{
	std::string		line;
	size_t			position;

	if (s1.length() == 0)
	{
		std::cout
			<< "Enter a valid string for S1"
		<< std::endl;
		return ;
	}
	while (std::getline(ifs, line))
	{
		while ((position = line.find(s1)) != std::string::npos)
		{
			line.erase(position, s1.length());
			line.insert(position, s2);
		}
		ofs << line << std::endl;
	}
	return ;
}

int	main(int argc, char **argv)
{
	std::ifstream	ifs(argv[1]);
	std::ofstream	ofs("replace.txt");

	if (arg_check(argc, argv, ifs, ofs) == -1)
	{
		return (-1);
	}
	replace(ifs, ofs, argv[2], argv[3]);
	ifs.close();
	ofs.close();
	return (0);
}
