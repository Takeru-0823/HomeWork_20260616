#pragma once

#include "Character.h"

class Hero : public Character
{
public:
	Hero(char* n, int h, int a);
	Hero(const Hero& other);
	~Hero();
	void operator=(const Hero& other);
	void Attack(Character& target);
};