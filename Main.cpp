#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Hero.h"
#include "Goblin.h"
using namespace std;

const int NAME_MAX = 16;
const int CHARACTER_MAX = 2;

enum
{
	HERO,
	GOBLIN
};

void ShowHP(const Character& character)
{
	cout << "HP " << character.GetHP() << endl;
}

void AttackTurn(Character& attacker, Character& target)
{
	attacker.Attack(target);
	cout << "相手の";
	ShowHP(target);
}

int main()
{
	srand((unsigned int)time(NULL));

	char h_name[NAME_MAX + 1] = "Hero";
	char g_name[NAME_MAX + 1] = "Goblin";

	bool p_win = false;
	Hero hero(h_name, 100, 20);
	Gonblin goblin(g_name, 130, 20);

	Character* character[CHARACTER_MAX];
	character[HERO] = new Hero(h_name, 100, 20);
	character[GOBLIN] = new Gonblin(g_name, 130, 20);

	while (true)
	{
		character[HERO]->AttackTurn(*character[HERO], *character[GOBLIN]);

		if (character[GOBLIN]->GetHP() <= 0)
		{
			p_win = true;
			break;
		}

		character[GOBLIN]->AttackTurn(*character[GOBLIN], *character[HERO]);

		if (character[HERO]->GetHP() <= 0)
		{
			break;
		}
	}

	if (p_win)
	{
		cout << "プレイヤーの勝ち！" << endl;
	}
	else
	{
		cout << "ゴブリンの勝ち！" << endl;
	}
}