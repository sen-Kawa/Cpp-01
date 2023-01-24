#include "Harl.class.hpp"

void Harl::complain(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	start = -1;

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			start = i;
		}
	}
	switch (start)
	{
		case 0:
				Harl::debug();
				__attribute__ ((fallthrough));
		case 1:
				Harl::info();
				__attribute__ ((fallthrough));
		case 2:
				Harl::warning();
				__attribute__ ((fallthrough));
		case 3:
				Harl::error();
				break ;
		default:
				std::cout << "Probably complaining about insignificant problems." << std::endl;
	}
	return ;
}

void Harl::debug(void)
{
	std::cout
		<< "DEBUG\n"
		<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
	<< std::endl;	
	return ;
}

void Harl::info(void)
{
	std::cout
		<< "INFO\n"
		<< "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
	<< std::endl;
	return ;
}

void Harl::warning(void)
{
	std::cout
		<< "WARNING\n"
		<< "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."	
	<< std::endl;
	return ;
}

void Harl::error(void)
{
	std::cout
		<< "ERROR\n"
		<< "This is unacceptable! I want to speak to the manager now."
	<< std::endl;
	return ;
}

Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}
