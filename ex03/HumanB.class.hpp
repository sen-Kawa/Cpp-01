#ifndef HUMANB_CLASS_HPP
# define HUMANB_CLASS_HPP

#include "Weapon.class.hpp"
#include <iostream>
#include <string>

class HumanB
{
		private:

			std::string	name;
			Weapon		*weapon;

		public:

			void	attack(void);
			void	setWeapon(Weapon &weapon);

			HumanB(std::string name);
			~HumanB(void);
};

#endif
