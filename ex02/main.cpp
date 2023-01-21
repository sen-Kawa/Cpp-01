#include <string>
#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN.";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	
	std::cout
		<< "Memory address of string variable: "
		<< &str << std::endl
		<< "Memory address held by stringPTR: "
		<< &stringPTR << std::endl
		<< "Memory address held by stringREF: "
		<< &stringREF << std::endl
	<< std::endl;
	return (0);


}
