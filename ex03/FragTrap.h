#ifndef CPP_MODULE_03_EX03_FRAGTRAP_H
#define CPP_MODULE_03_EX03_FRAGTRAP_H
#include "ClapTrap.h"

class FragTrap: virtual public ClapTrap {
	
public:
	FragTrap(std::string const & name = "");
	FragTrap(FragTrap const & frag_trap);
	virtual ~FragTrap();
	FragTrap &	operator=(FragTrap const & frag_trap);

	int		get_energy_points() const;

	void	highFivesGuys();

protected:
	int		_energy_points;

};

std::ostream &	operator<<(std::ostream & o, FragTrap const & frag_trap);

#endif //CPP_MODULE_03_EX03_FRAGTRAP_H
