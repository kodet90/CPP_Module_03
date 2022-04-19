#include "main.h"

int	main() {
	{
		FragTrap frag_trap("frag1");
		std::cout << std::endl;

		FragTrap frag_trap2(frag_trap);
		std::cout << std::endl;

		FragTrap frag_trap3;
		std::cout << std::endl;

		frag_trap3 = frag_trap;
		std::cout << std::endl;

		frag_trap.attack("yo");
		std::cout << std::endl;

		frag_trap.takeDamage(5);
		std::cout << std::endl;

		frag_trap.beRepaired(5);
		std::cout << std::endl;

		frag_trap.highFivesGuys();
		std::cout << std::endl;
	}
	{
		std::cout << std::endl;
		FragTrap frag_trap("frag1");
		FragTrap frag_trap2("frag2");
	}
	return 0;
}