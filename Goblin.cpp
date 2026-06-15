#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Goblin.h"
using namespace std;

Gonblin::Gonblin(char* n, int h, int a)
{
	if (n != nullptr)
	{
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}
	else
	{
		const char* DEFAULT_NAME = "No Name";
		name = new char[strlen(DEFAULT_NAME) + 1];
		strcpy(name, DEFAULT_NAME);
	}

	if (h < 0) hp = 0;
	else hp = h;

	if (a < 0) attack = 0;
	else attack = a;
}

Gonblin::~Gonblin()
{
	if (name != nullptr)
	{
		delete[] name;
		name = nullptr;
	}
}

void Gonblin::Attack(Character& target)
{
	cout << "ƒSƒuƒŠƒ“‚ÌUŒ‚I" << endl;
	int damage = attack + (rand() % 5 - 2);
	target.TakeDamage(damage);
}
