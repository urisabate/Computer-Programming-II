#pragma once

typedef unsigned short us;

class Player
{
private:
	const char* name;
	us numLifes;
	bool invincible;
	bool *capabilities = new bool[3];
	bool *weapon = new bool[3];

public:
	Player(const char* _name, us lives, bool invincible_,bool *weapon_,bool*capability) :
		name(_name), numLifes(lives), invincible(invincible_),
};
