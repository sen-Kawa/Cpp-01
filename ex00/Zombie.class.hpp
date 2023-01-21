#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

#include <string>

class Zombie
{
	private:

		std::string	name;

	public:

		void announce(void);
		Zombie *newZombie(std::string name);
		void randomChump(std::string name);
		
		Zombie(void);
		~Zombie(void);
};

#endif
