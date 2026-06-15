#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Goblin.h"
using namespace std;

Goblin::Goblin(char* n, int h, int a)
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

Goblin::Goblin(const Goblin& other)
{
	if (other.name != nullptr)
	{
		name = new char[strlen(other.name) + 1];
		strcpy(name, other.name);
	}
	else
	{
		const char* DEFAULT_NAME = "No Name";
		name = new char[strlen(DEFAULT_NAME) + 1];
		strcpy(name, DEFAULT_NAME);
	}

	if (other.hp < 0) hp = 0;
	else hp = other.hp;

	if (other.attack < 0) attack = 0;
	else attack = other.attack;

}

void Goblin::operator=(const Goblin& other)
{
	delete[] name;
	name = nullptr;

	if (other.name != nullptr)
	{
		name = new char[strlen(other.name) + 1];
		strcpy(name, other.name);
	}
	else
	{
		const char* DEFAULT_NAME = "No Name";
		name = new char[strlen(DEFAULT_NAME) + 1];
		strcpy(name, DEFAULT_NAME);
	}

	if (other.hp < 0) hp = 0;
	else hp = other.hp;

	if (other.attack < 0) attack = 0;
	else attack = other.attack;
}

Goblin::~Goblin()
{
	delete[] name;
	name = nullptr;
}

void Goblin::Attack(Character& target)
{
	cout << "ƒSƒuƒŠƒ“‚ÌUŒ‚I" << endl;
	int damage = attack + (rand() % 5 - 2);
	target.TakeDamage(damage);
}
