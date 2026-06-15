#pragma once

#include "Character.h"

class Hero : public Character
{
public:
	Hero(char* n, int h, int a);
	~Hero();
	void Attack(Character& target);
};