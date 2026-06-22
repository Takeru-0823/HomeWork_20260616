#include <iostream>
#include "Character.h"
using namespace std;

int Character::GetHP() const
{
	return hp;
}

void Character::TakeDamage(int damage)
{
	cout << damage << " ダメージを与えた" << endl;
	hp -= damage;
	if (hp < 0) hp = 0;
}

void Character::Attack(Character& character)
{
	cout << "attack" << endl;
}

void Character::AttackTurn(Character& target)
{
	cout << name << "のターン" << endl;
	Attack(target);
	cout << target.name << "のHP" << target.GetHP() << endl;
	cout << endl;
}
