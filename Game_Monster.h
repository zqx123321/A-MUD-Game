#pragma once
#include<iostream>
#include<vector>
#include"Game_Skill.h"
#include"Game_Equipment.h"
using namespace std;






class Game_Monster
{
public:
	Game_Monster(int max_HP,int value_Attack,string name,int value_exp);

	int giveAttack();//返回伤害值

	void getHurt(int value_Hurt);

	bool checkHP();

	string getName();

	int giveExp(){return value_exp;}

	void showInfo();
	

private:

	int value_HP;
	int max_HP;
	int value_Attack;
	string name;
	int value_exp;


};


class Game_Boss:public Game_Monster
{
public:

	Game_Boss(int max_HP,int value_Attack,string name,int value_exp);

	void pushSkill(Monster_Skill &skill);

	int skillAttack(int num);

	int getSkillNum(){return this->monsterSkill.size();}

	Game_Equipment& getTakeEquipment(int num) {

		return takeEquipment[num];
	}

	int getEquipmentNum(){return this->takeEquipment.size();}

	void pushEquipment(Game_Equipment &euipment);
private:

	int value_HP;
	int max_HP;
	int value_Attack;
	string name;
	int value_exp;

	
	vector<Monster_Skill>monsterSkill;
	vector<Game_Equipment>takeEquipment;//携带装备



};


