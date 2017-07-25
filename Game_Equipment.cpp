#include<iostream>
#include "Game_Equipment.h"
#include<string>
#include<Windows.h>
using namespace std;

//Game_Equipment��Ĺ��캯���Լ�������Ա����
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
	if(type==1)  typeName="����";
	else if(type==2) typeName="����";
	else if(type==3) typeName="��Ʒ";
	else if(type==4) typeName="����";
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 10);
	cout<<"װ�����ƣ�   "<<name<<endl;
	cout<<"װ�����ͣ�   "<<typeName<<endl;
	cout<<"Ѫ���ӳɣ�   "<<addHP<<endl;
	cout<<"ħ���ӳɣ�   "<<addMP<<endl;
	cout<<"�����ӳɣ�   "<<addAttack<<endl;
	cout<<"�����ӳɣ�   "<<addDefend<<endl<<endl<<endl;
}