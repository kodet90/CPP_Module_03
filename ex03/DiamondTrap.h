#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H
#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"

class DiamondTrap: public ScavTrap, public FragTrap {

public:
	DiamondTrap(std::string const & name = "");
	DiamondTrap(DiamondTrap const & diamond_trap);
	virtual ~DiamondTrap();
	DiamondTrap &	operator=(DiamondTrap const & diamond_trap);

	std::string	get_name() const;

	void 	attack(std::string const & target);
	void	whoAmI();

private:
	std::string	_name;

};

std::ostream &	operator<<(std::ostream & o, DiamondTrap const & diamond_trap);

#endif //DIAMONDTRAP_H
