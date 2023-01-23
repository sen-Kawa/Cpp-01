#ifndef WEAPON_CLASS_HPP
# define WEAPON_CLASS_HPP

#include <string>

class Weapon
{
		private:

			std::string type;

		public:

			const std::string&	getType(void);
			void	setType(std::string newType);

			Weapon(void);
			~Weapon(void);
};

#endif
