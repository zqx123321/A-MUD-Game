#pragma once
#include<iostream>
using namespace std;

class Game_Equipment {
public:
	Game_Equipment(string name, int addHP, int addMP, int addAttack, int addDefend, int type);
	/*
	type表示装备类型
	1......武器
	2......防具
	*/
	string getName() { return name; }
	int getAddHP() { return addHP; }
	int getAddMP() { return addHP; }
	int getAddAttack() { return addAttack; }
	int getAddDefend() { return addDefend; }
	int getType() { return type; }

	bool operator == (const Game_Equipment& equip);

	void showInfo();

private:
	string name;
	int addHP;//增加HP
	int addMP;//增加MP
	int addAttack;//增加攻击力
	int addDefend;//增加防御
	int type;//装备类型
};