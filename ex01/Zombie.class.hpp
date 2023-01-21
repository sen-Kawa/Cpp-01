#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

#include <string>
#include <iostream>

class Zombie
{
	private:

		std::string	name;

	public:

		void	announce(void);
		void	assign_name(std::string name);
		
		Zombie(void);
		~Zombie(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
