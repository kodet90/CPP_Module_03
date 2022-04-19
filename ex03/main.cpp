#include "main.h"

int	main() {
	{
		DiamondTrap diamond_trap("diamond1");
		std::cout << std::endl;

		DiamondTrap diamond_trap2(diamond_trap);
		std::cout << std::endl;

		DiamondTrap diamond_trap3;
		std::cout << std::endl;

		diamond_trap3 = diamond_trap;
		std::cout << std::endl;

		diamond_trap.attack("yo");
		std::cout << std::endl;

		diamond_trap.takeDamage(5);
		std::cout << std::endl;

		diamond_trap.beRepaired(5);
		std::cout << std::endl;

		diamond_trap.guardGate();
		std::cout << std::endl;

		diamond_trap.highFivesGuys();
		std::cout << std::endl;

		diamond_trap.whoAmI();
		std::cout << std::endl;
	}
	{
		std::cout << std::endl;
		DiamondTrap diamond_trap("diamond1");
		DiamondTrap diamond_trap2("diamond2");
	}
	return 0;
}