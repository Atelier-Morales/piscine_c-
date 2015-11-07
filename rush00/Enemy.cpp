#include "Enemy.hpp"

Enemy::Enemy(void) : name("\\x|x/"), posX(5), posY(5) { return ;}

// Enemy::Enemy(int hp, std::string const & type) : hp(hp), type(type) { return; }

Enemy::~Enemy(void) { return ;}

// Enemy::Enemy(Enemy const & src) {
// 	*this = src;
// 	return ;
// }

Enemy & Enemy::operator=(Enemy const & src) {
	this->score = src.score;
	// this->type = src.type;
	return (*this);
}

void Enemy::setPosX(int x) {
	this->posX = x;
	return ;
}

void Enemy::setPosY(int y) {
	this->posY = y;
	return ;
}

void Enemy::setMaxX(int x) {
	this->maxX = x;
	return ;
}

void Enemy::setMaxY(int y) {
	this->maxY = y;
	return ;
}

int Enemy::getPosX(void) const {
	return this->posX;
}

int Enemy::getPosY(void) const {
	return this->posY;
}

int Enemy::getMaxX(void) const {
	return this->maxX;
}

int Enemy::getMaxY(void) const {
	return this->maxY;
}

std::string Enemy::getName(void) const {
	return this->name;
}