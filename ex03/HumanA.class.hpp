#ifndef HUMANA_CLASS_HPP
# define HUMANA_CLASS_HPP

#include "Weapon.class.hpp"
#include <string>

class HumanA
{
		private:

			std::string	name;
			Weapon		weapon;

		public:

			void attack(void);

			HumanA(std::string name, Weapon weapon);
			~HumanA(void);
};

#endif
