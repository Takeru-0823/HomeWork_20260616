#pragma once

class Character
{
protected:
	char* name;
	int hp;
	int attack;

public:
	int GetHP() const;
	void TakeDamage(int damage);
	virtual void Attack(Character& character);
	void AttackTurn(Character& attacker, Character& target);
};