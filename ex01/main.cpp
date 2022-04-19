#include "main.h"

int	main() {
	{
		ScavTrap scav_trap("scav1");
		std::cout << std::endl;

		ScavTrap scav_trap2(scav_trap);
		std::cout << std::endl;

		ScavTrap scav_trap3;
		std::cout << std::endl;

		scav_trap3 = scav_trap;
		std::cout << std::endl;

		scav_trap.attack("yo");
		std::cout << std::endl;

		scav_trap.takeDamage(5);
		std::cout << std::endl;

		scav_trap.beRepaired(5);
		std::cout << std::endl;

		scav_trap.guardGate();
		std::cout << std::endl;
	}
	{
		std::cout << std::endl;
		ScavTrap scav_trap("scav1");
		ScavTrap scav_trap2("scav2");
	}
	return 0;
}