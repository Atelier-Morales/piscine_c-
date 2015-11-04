#include <iostream>

#ifndef WEAPON_HPP
# define WEAPON_HPP

class Weapon
{
public:
	Weapon(std::string const &type);
	~Weapon();

	std::string	const 	&getType() const;
	void				setType(std::string type);

private:
	std::string			_type;
};

#endif