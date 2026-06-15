#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Hero.h"
using namespace std;

Hero::Hero(char* n, int h, int a)
{
	name = new char[strlen(n) + 1];
	strcpy(name, n);

	if (h < 0) hp = 0;
	else hp = h;

	if (a < 0) attack = 0;
	else attack = a;
}

Hero::~Hero()
{
	if (name != nullptr)
	{
		delete[] name;
		name = nullptr;
	}
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