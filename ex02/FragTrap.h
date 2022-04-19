#ifndef CPP_MODULE_03_EX02_FRAGTRAP_H
#define CPP_MODULE_03_EX02_FRAGTRAP_H
#include "ClapTrap.h"

class FragTrap: public ClapTrap {
	
public:
	FragTrap(std::string const & name = "");
	FragTrap(FragTrap const & frag_trap);
	virtual ~FragTrap();
	FragTrap &	operator=(FragTrap const & frag_trap);

	void	highFivesGuys();

};

std::ostream &	operator<<(std::ostream & o, FragTrap const & frag_trap);

#endif //CPP_MODULE_03_EX02_FRAGTRAP_H
