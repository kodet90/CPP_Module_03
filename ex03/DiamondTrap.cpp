#include "DiamondTrap.h"

DiamondTrap::DiamondTrap(std::string const & name) :
		ClapTrap::ClapTrap(name + "_clap_name"),
		ScavTrap(name + "_clap_name"),
		FragTrap(name + "_clap_name") {
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
	std::cout << *this << " spawned" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & diamond_trap) :
		ClapTrap::ClapTrap(diamond_trap._name + "_clap_name"),
		ScavTrap(diamond_trap._name + "_clap_name"),
		FragTrap(diamond_trap._name + "_clap_name") {
	std::cout << *this << " spawned to be a container for "
			  << diamond_trap << std::endl;
	*this = diamond_trap;
}

DiamondTrap::~DiamondTrap() {
	std::cout << *this << " disappeared" << std::endl;
}

DiamondTrap &	DiamondTrap::operator=(DiamondTrap const & diamond_trap) {
	if (this != &diamond_trap) {
		std::cout << diamond_trap << " clones to " << *this << std::endl;
		this->_name = diamond_trap._name;
		this->_hit_points = diamond_trap._hit_points;
		this->_energy_points = diamond_trap._energy_points;
		this->_attack_damage = diamond_trap._attack_damage;
	}
	return *this;
}

std::string	DiamondTrap::get_name() const {
	return this->_name;
}

void 	DiamondTrap::attack(std::string const & target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap '" << this->_name << "' / '" << ClapTrap::_name
		<< "' (" << this->_hit_points << " HP, " << this->_energy_points
		<< " MP, " << this->_attack_damage << " ATK): Who am I?" << std::endl;
}

std::ostream &	operator<<(std::ostream & o, DiamondTrap const & diamond_trap) {
	o << "DiamondTrap '" << diamond_trap.get_name() << "' ("
	  << diamond_trap.get_hit_points() << " HP, " << diamond_trap.get_energy_points()
	  << " MP, " << diamond_trap.get_attack_damage() << " ATK)";
	return o;
}
