#ifndef CPP_MODULE_03_EX03_CLAPTRAP_H
#define CPP_MODULE_03_EX03_CLAPTRAP_H
#include <iostream>

class ClapTrap {

public:
	ClapTrap(std::string const & name = "");
	ClapTrap(ClapTrap const & clap_trap);
	virtual ~ClapTrap();
	ClapTrap &	operator=(ClapTrap const & clap_trap);

	virtual void 	attack(std::string const & target);
	void 	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	virtual std::string	get_name() const;
	int			get_hit_points() const;
	virtual int	get_energy_points() const;
	int			get_attack_damage() const;
	void		set_name(std::string const & name);
	void		set_hit_points(int hit_points);
	void		set_energy_points(int energy_points);
	void		set_attack_damage(int attack_damage);

	bool		ok() const;

protected:
	std::string	_name;
	int			_hit_points;
	int			_energy_points;
	int			_attack_damage;

};

std::ostream &	operator<<(std::ostream & o, ClapTrap const & clap_trap);

#endif //CPP_MODULE_03_EX03_CLAPTRAP_H
