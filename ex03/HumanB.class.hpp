#ifndef HUMANB_CLASS_HPP
# define HUMANB_CLASS_HPP

#include "Weapon.class.hpp"
#include <string>

class HumanB
{
		private:

			std::string	name;
			Weapon		weapon;

		public:

			void attack(void);

			HumanB(std::string name);
			~HumanB(void);
};

#endif
