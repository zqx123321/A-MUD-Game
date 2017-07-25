#include<iostream>
#include "Game_Equipment.h"
#include<string>
#include<Windows.h>
using namespace std;

//Game_Equipment类的构造函数以及其他成员函数
Game_Equipment::Game_Equipment(string name, int addHP, int addMP, int addAttack, int addDefend, int type)
{
	this->name = name;
	this->addHP = addHP;
	this->addMP = addMP;
	this->addAttack = addAttack;
	this->addDefend = addDefend;
	this->type = type;
}

bool Game_Equipment::operator==(const Game_Equipment & equip)
{
	return (name == equip.name)?true:false;
}


void Game_Equipment::showInfo(){
	HANDLE hConsole;
	string typeName;
	if(type==1)  typeName="武器";
	else if(type==2) typeName="防具";
	else if(type==3) typeName="饰品";
	else if(type==4) typeName="法宝";
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 10);
	cout<<"装备名称：   "<<name<<endl;
	cout<<"装备类型：   "<<typeName<<endl;
	cout<<"血量加成：   "<<addHP<<endl;
	cout<<"魔法加成：   "<<addMP<<endl;
	cout<<"攻击加成：   "<<addAttack<<endl;
	cout<<"防御加成：   "<<addDefend<<endl<<endl<<endl;
}