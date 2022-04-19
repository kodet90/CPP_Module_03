#ifndef CPP_MODULE_03_EX03_SCAVTRAP_H
#define CPP_MODULE_03_EX03_SCAVTRAP_H
#include "ClapTrap.h"

class ScavTrap: virtual public ClapTrap {
	
public:
	ScavTrap(std::string const & name = "");
	ScavTrap(ScavTrap const & scav_trap);
	virtual ~ScavTrap();
	ScavTrap &	operator=(ScavTrap const & scav_trap);

	void 	attack(std::string const & target);
	void	guardGate();

};

std::ostream &	operator<<(std::ostream & o, ScavTrap const & scav_trap);

#endif //CPP_MODULE_03_EX03_SCAVTRAP_H
