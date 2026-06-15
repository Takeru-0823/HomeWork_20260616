#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Hero.h"
#include "Goblin.h"
using namespace std;

const int NAME_MAX = 16;

int main()
{
	srand((unsigned int)time(NULL));

	char h_name[NAME_MAX + 1] = "Hero";
	char g_name[NAME_MAX + 1] = "Goblin";

	bool p_win = false;
	Hero hero(h_name, 100, 20);
	Goblin goblin(g_name, 130, 20);

	while (true)
	{
		hero.AttackTurn(hero, goblin);

		if (goblin.GetHP() <= 0)
		{
			p_win = true;
			break;
		}

		goblin.AttackTurn(goblin, hero);

		if (hero.GetHP() <= 0)
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