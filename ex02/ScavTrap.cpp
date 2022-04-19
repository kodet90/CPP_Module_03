#include "ScavTrap.h"

ScavTrap::ScavTrap(std::string const & name) : ClapTrap(name) {
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << *this << " spawned" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & scav_trap) : ClapTrap(scav_trap._name) {
	std::cout << *this << " spawned to be a container for "
	<< scav_trap << std::endl;
	*this = scav_trap;
}

ScavTrap::~ScavTrap() {
	std::cout << *this << " disappeared" << std::endl;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & scav_trap) {
	if (this != &scav_trap) {
		std::cout << scav_trap << " clones to " << *this << std::endl;
		this->_name = scav_trap._name;
		this->_hit_points = scav_trap._hit_points;
		this->_energy_points = scav_trap._energy_points;
		this->_attack_damage = scav_trap._attack_damage;
	}
	return *this;
}

void 	ScavTrap::attack(std::string const & target) {
	if (this->ok()) {
		std::cout << *this;
		this->_energy_points--;
		std::cout << " attacks '" << target << "', causing "
				  << this->_attack_damage << " points of damage! ("
				  << this->_energy_points << " MP)" << std::endl;
	}
}

void	ScavTrap::guardGate() {
	std::cout << *this << " is now in Gate keeper mode" << std::endl;
}

std::ostream &	operator<<(std::ostream & o, ScavTrap const & scav_trap) {
	o << "ScavTrap '" << scav_trap.get_name() << "' ("
	  << scav_trap.get_hit_points() << " HP, " << scav_trap.get_energy_points()
	  << " MP, " << scav_trap.get_attack_damage() << " ATK)";
	return o;
}
