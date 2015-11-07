#include "Player.hpp"

Player::Player(void) : name("Player"), score(0), life(3), level(0) { return ;}

Player::Player(std::string const & name) : name(name), score(0), life(3), level(0) { return ;}

Player::~Player(void) { return ;}

Player::Player(Player const & src) { 
	*this = src;
	return ;
}

Player & Player::operator=(Player const & src) {
	this->name = src.name;
	// this->AP = src.AP;
	return (*this);
}

std::string Player::getName(void) const {
	return this->name;
}

// void Player::equip(AWeapon* weapon) {
// 	this->weapon = weapon;
// 	return ;
// }

// void Player::attack(Enemy* enemy) {
// 	if (getWeapon() != NULL) {
// 		if (getAP() > weapon->getAPCost()) {
// 			std::cout<<name<<" attacks "<< enemy->getType()<<" with a "<<weapon->getName()<<std::endl;
// 			weapon->attack();
// 			enemy->takeDamage(weapon->getDamage());
// 			this->AP -= weapon->getAPCost();
// 		}
// 	}
// 	return ;
// }

void Player::setPosX(int x) {
	this->posX = x;
	return ;
}

void Player::setPosY(int y) {
	this->posY = y;
	return ;
}

void Player::setMaxX(int x) {
	this->maxX = x;
	return ;
}

void Player::setMaxY(int y) {
	this->maxY = y;
	return ;
}

int Player::getPosX(void) const {
	return this->posX;
}

int Player::getPosY(void) const {
	return this->posY;
}

int Player::getMaxX(void) const {
	return this->maxX;
}

int Player::getMaxY(void) const {
	return this->maxY;
}

int Player::getScore(void) const {
	return this->score;
}

int Player::getLife(void) const {
	return this->life;
}

int Player::getLevel(void) const {
	return this->level;
}
// int Player::getAP(void) const {
// 	return this->AP;
// }

// AWeapon* Player::getWeapon(void) const {
// 	return this->weapon;
// }

// std::ostream & operator<<(std::ostream & o, Player & src) {
// 	if (src.getWeapon() == NULL)
// 		o <<src.getName()<<" has "<<src.getAP()<<" AP and is unarmed"<<std::endl;
// 	else
// 		o <<src.getName()<<" has "<<src.getAP()<<" AP and wields a "<<src.getWeapon()->getName()<<std::endl;
// 	return o;
// }