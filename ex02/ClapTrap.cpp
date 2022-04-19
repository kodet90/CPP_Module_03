#include "ClapTrap.h"

ClapTrap::ClapTrap(std::string const & name) : _name(name), _hit_points(10),
_energy_points(10), _attack_damage(0) {
	std::cout << *this << " spawned" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & clap_trap) {
	std::cout << *this << " spawned to be a container for "
	<< clap_trap << std::endl;
	*this = clap_trap;
}

ClapTrap::~ClapTrap() {
	std::cout << *this << " disappeared" << std::endl;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & clap_trap) {
	if (this != &clap_trap) {
		std::cout << clap_trap << " clones to " << *this << std::endl;
		this->_name = clap_trap._name;
		this->_hit_points = clap_trap._hit_points;
		this->_energy_points = clap_trap._energy_points;
		this->_attack_damage = clap_trap._attack_damage;
	}
	return *this;
}

void 	ClapTrap::attack(std::string const & target) {
	if (this->ok()) {
		std::cout << *this;
		this->_energy_points--;
		std::cout << " attacks '" << target << "', causing "
		<< this->_attack_damage << " points of damage! ("
		<< this->_energy_points << " MP)" << std::endl;
	}
}

void 	ClapTrap::takeDamage(unsigned int amount) {
	if (this->ok()) {
		std::cout << *this;
		if (this->_hit_points - static_cast<int>(amount) < 0) {
			this->_hit_points = 0;
		} else {
			this->_hit_points -= amount;
		}
		std::cout << " takes damage of -" << amount << " hit points ("
				  << this->_hit_points << " HP)" << std::endl;
	}
}

void	 ClapTrap::beRepaired(unsigned int amount) {
	if (this->ok()) {
		std::cout << *this;
		if (this->_hit_points + amount > INT_MAX) {
			this->_hit_points = INT_MAX;
		} else {
			this->_hit_points += amount;
		}
		this->_energy_points--;
		std::cout << " repairs by +" << amount << " hit points ("
		<< this->_hit_points << " HP, " << this->_energy_points << " MP)"
		<< std::endl;
	}
}

std::string	ClapTrap::get_name() const {
	return this->_name;
}

int		ClapTrap::get_hit_points() const {
	return this->_hit_points;
}

int		ClapTrap::get_energy_points() const {
	return this->_energy_points;
}

int		ClapTrap::get_attack_damage() const {
	return this->_attack_damage;
}

void	ClapTrap::set_name(std::string const & name) {
	this->_name = name;
}

void	ClapTrap::set_hit_points(int hit_points) {
	this->_hit_points = hit_points;
}

void	ClapTrap::set_energy_points(int energy_points) {
	this->_energy_points = energy_points;
}

void	ClapTrap::set_attack_damage(int attack_damage) {
	this->_attack_damage = attack_damage;
}

bool	ClapTrap::ok() const {
	return this->_hit_points > 0 && this->_energy_points > 0;
}

std::ostream &	operator<<(std::ostream & o, ClapTrap const & clap_trap) {
	o << "ClapTrap '" << clap_trap.get_name() << "' ("
	<< clap_trap.get_hit_points() << " HP, " << clap_trap.get_energy_points()
	<< " MP, " << clap_trap.get_attack_damage() << " ATK)";
	return o;
}