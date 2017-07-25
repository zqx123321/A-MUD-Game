#pragma once
#include<iostream>
#include<string>



using namespace std;



class Game_Skill
{
public:
	Game_Skill(double skillProportion,int need_MP,string name);

	double getProportion(){return this->skillProportion;}

	//void checkSkill(int level);

	int getMP(){return need_MP;}

	string getName(){return name;}

private:

	double skillProportion;
	int need_MP;
	string name;
	//bool isCanUse;
};


class Monster_Skill
{
public:
	Monster_Skill(double skillProportion,string name):skillProportion(skillProportion),name(name){}

	double getProportion(){return this->skillProportion;}

	string getName(){return name;}

private:

	double skillProportion;//技能的伤害输出值为普通攻击的倍数

	string name;
};
