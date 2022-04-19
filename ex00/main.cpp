#include "main.h"

int	main() {
	srand(time(nullptr));
	int	rand = std::rand();
	int	hp = rand % 10 + 10;
	int	mp = rand % 10 + 10;
	int	atk = rand % 10 + 10;

	ClapTrap hero("Hero");
	ClapTrap minion1("Minion 1");
	ClapTrap minion2("Minion 2");
	ClapTrap minion3("Minion 3");
	ClapTrap overlord("Overlord");

	std::cout << std::endl;

	hero.set_hit_points(hp * 2);
	hero.set_energy_points(mp * 2);
	hero.set_attack_damage(atk);
	std::cout << "[BOOSTS] " << hero << ": I will defeat you, Overlord!" << std::endl;

	minion1.set_attack_damage(5);
	std::cout << minion1 << ": Ha-ha!" << std::endl;
	minion2.set_attack_damage(6);
	std::cout << minion2 << ": Muhaha!" << std::endl;
	minion3.set_attack_damage(4);
	std::cout << minion3 << ": No way!" << std::endl;

	overlord.set_hit_points(hp);
	overlord.set_energy_points(mp);
	overlord.set_attack_damage(atk);
	std::cout << "[CASTS A SPELL] " << overlord << ": Come and try, Hero!" << std::endl;

	std::cout << std::endl;

	while (hero.ok() && (minion1.ok() || minion2.ok() || minion3.ok()
	|| overlord.ok())) {
		if (minion1.ok()) {
			hero.attack(minion1.get_name());
			minion1.takeDamage(hero.get_attack_damage());
		}
		else if (minion2.ok()) {
			hero.attack(minion2.get_name());
			minion2.takeDamage(hero.get_attack_damage());
		}
		else if (minion3.ok()) {
			hero.attack(minion3.get_name());
			minion3.takeDamage(hero.get_attack_damage());
		}
		else if (overlord.ok()) {
			hero.attack(overlord.get_name());
			overlord.takeDamage(hero.get_attack_damage());
		}
		if (minion1.ok()) {
			minion1.attack(hero.get_name());
			hero.takeDamage(minion1.get_attack_damage());
		}
		if (minion2.ok()) {
			minion2.attack(hero.get_name());
			hero.takeDamage(minion2.get_attack_damage());
		}
		if (minion3.ok()) {
			minion3.attack(hero.get_name());
			hero.takeDamage(minion3.get_attack_damage());
		}
		if (overlord.ok()) {
			overlord.attack(hero.get_name());
			hero.takeDamage(overlord.get_attack_damage());
		}
		hero.beRepaired(hp);

		std::cout << std::endl;
	}

	if (hero.ok()) {
		std::cout << overlord << ": DAMN YOU, HERO!!!" << std::endl;
		std::cout << hero << ": The good always prevails!" << std::endl;
	}
	else {
		std::cout << hero << ": I have failed..." << std::endl;
		std::cout << overlord << ": HA-HA-HA!!!" << std::endl;
	}

	std::cout << std::endl;

	return 0;
}