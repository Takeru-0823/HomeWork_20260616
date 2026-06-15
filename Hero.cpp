#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Hero.h"
using namespace std;

Hero::Hero(char* n, int h, int a)
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

Hero::Hero(const Hero& other)
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

Hero::~Hero()
{
	delete[] name;
	name = nullptr;
}

void Hero::operator=(const Hero& other)
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

void Hero::Attack(Character& target)
{
	cout << name << "の攻撃！" << endl;
	int damage = attack;
	if (rand() % 5 == 0)
	{
		cout << "クリティカル！" << endl;
		damage *= 2;
	}
	target.TakeDamage(damage);
}