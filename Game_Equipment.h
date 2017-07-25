#pragma once
#include<iostream>
using namespace std;

class Game_Equipment {
public:
	Game_Equipment(string name, int addHP, int addMP, int addAttack, int addDefend, int type);
	/*
	type��ʾװ������
	1......����
	2......����
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
	int addHP;//����HP
	int addMP;//����MP
	int addAttack;//���ӹ�����
	int addDefend;//���ӷ���
	int type;//װ������
};