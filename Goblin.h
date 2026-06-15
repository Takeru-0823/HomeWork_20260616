#pragma once

#include "Character.h"

class Goblin : public Character
{
public:
	Goblin(char* n, int h, int a);
	Goblin(const Goblin& other);
	~Goblin();
	void operator=(const Goblin& other);
	void Attack(Character& target);
};