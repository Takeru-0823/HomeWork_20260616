#pragma once

#include "Character.h"

class Gonblin : public Character
{
public:
	Gonblin(char* n, int h, int a);
	~Gonblin();
	void Attack(Character& target);
};