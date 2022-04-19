#include "FragTrap.h"

FragTrap::FragTrap(std::string const & name) : ClapTrap(name) {
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << *this << " spawned" << std::endl;
}

FragTrap::FragTrap(FragTrap const & frag_trap) : ClapTrap(frag_trap._name) {
	std::cout << *this << " spawned to be a container for "
	<< frag_trap << std::endl;
	*this = frag_trap;
}

FragTrap::~FragTrap() {
	std::cout << *this << " disappeared" << std::endl;
}

FragTrap &	FragTrap::operator=(FragTrap const & frag_trap) {
	if (this != &frag_trap) {
		std::cout << frag_trap << " clones to " << *this << std::endl;
		this->_name = frag_trap._name;
		this->_hit_points = frag_trap._hit_points;
		this->_energy_points = frag_trap._energy_points;
		this->_attack_damage = frag_trap._attack_damage;
	}
	return *this;
}

void	FragTrap::highFivesGuys() {
	std::cout << *this << " positive high fives request" << std::endl;
}

std::ostream &	operator<<(std::ostream & o, FragTrap const & frag_trap) {
	o << "FragTrap '" << frag_trap.get_name() << "' ("
	  << frag_trap.get_hit_points() << " HP, " << frag_trap.get_energy_points()
	  << " MP, " << frag_trap.get_attack_damage() << " ATK)";
	return o;
}
