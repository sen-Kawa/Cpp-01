#ifndef HUMANB_CLASS_HPP
# define HUMANB_CLASS_HPP

#include <string>
#include "Weapon.class.hpp"

class HumanB
{
		private:

			std::string	name;
			Weapon		weapon;

		public:

			void attack(void);

			HumanB(void);
			~HumanB(void);
};

#endif
