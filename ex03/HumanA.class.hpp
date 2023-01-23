#ifndef HUMANA_CLASS_HPP
# define HUMANA_CLASS_HPP

#include <string>
#include "Weapon.class.hpp"

class HumanA
{
		private:

			std::string	name;
			Weapon		weapon;

		public:

			void attack(void);

			HumanA(void);
			~HumanA(void);
};

#endif
