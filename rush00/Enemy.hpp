#ifndef ENEMY_H
# define ENEMY_H
# include <iostream>
# include <iomanip>
# include <cstdlib>

class Enemy {

protected:
	std::string name;
	int posX;
	int posY;
	int maxX;
	int maxY;
	int score;
	int life;
	// int AP;
	// AWeapon* weapon;
	// Enemy* enemy;

public:
	Enemy(void);
	// Enemy(std::string const & name);
	~Enemy(void);
	Enemy(Enemy const & src);
	Enemy & operator=(Enemy const & src);
	void setPosX(int x);
	void setPosY(int y);
	void setMaxX(int x);
	void setMaxY(int y);
	int getMaxX(void) const;
	int getMaxY(void) const;
	int getPosX(void) const;
	int getPosY(void) const;
	// void attack(Player const & src);
	std::string getName(void) const;
};

#endif